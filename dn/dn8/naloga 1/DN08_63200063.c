#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int n, k, r;

void natisniTabelo(int *tabela, int dolzina)
{
    printf("[ ");
    for (int i = 0; i < dolzina; i++)
    {
        
        printf("%d ", tabela[i]);

    }
    printf("]\n");
}

bool jeUrejena(int *tabela, int n)
{
    bool urejeno = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (tabela[i] > tabela[i + 1])
        {
            urejeno = false;
            break;
        }
        
    }
    
    return urejeno;

}

void zamenjaj(int *tabela, int kje, int dolzinaPod, int kam){

    int *temp = (int*)malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        temp[i]=tabela[i];
    }
   
    

    for (int i = 0; i < dolzinaPod; i++)
    {
        tabela[i+kje] = temp[i+kam];
    }
    
    for (int i = 0; i < dolzinaPod; i++)
    {
        tabela[kam + i] = temp[kje + i];
    }
  
    
    
}


int jous = 0;
int aba[20];
int resi(int *tabela, int stZamenjav, int dolzinaPod, int deep, int halo)
{
    int stResitev = 0;
   //printf("stresitev:%d\n",stResitev);
    if (deep > k)
    {
        //printf("%d", deep);
        return halo;
    }
    
    if(jeUrejena(tabela,n)){
        printf("    ");
        natisniTabelo(aba, 5);
        natisniTabelo(tabela, n);

        
        jous++;
    }

    
    
    for (int i = 0; i <= n - dolzinaPod * 2; i++)
    {
       for (int j = i + dolzinaPod; j <= n - dolzinaPod; j++)
       {
           //printf(" [%d,%d] ", i, j);
           aba[deep] = 10*i + j;
           zamenjaj(tabela,i,dolzinaPod,j);
           stResitev += resi(tabela,stZamenjav,dolzinaPod,deep + 1, halo);
       }
       
    }
    
    return jous;

}



int main(int argc, char const *argv[])
{
    
    scanf("%d%d%d", &n, &k, &r);
    //n je dolzina tabele k je stevilo zamenjav r pa je dolzina podzaporedja
    int *tabela = (int*)calloc(sizeof(int), n);
    
    for(int i = 0; i < n; i++ )
    {
        scanf("%d", &tabela[i]);
    }

    int stResitev = resi(tabela, k, r, -1, 0);
    printf("\n%d kdjsa\n",stResitev);
    
    
    /*
    zamenjaj(tabela,0,r,3);
    natisniTabelo(tabela, n);
    zamenjaj(tabela,1,r,6);
    natisniTabelo(tabela, n);
    zamenjaj(tabela,3,r,7);
    natisniTabelo(tabela, n);
    zamenjaj(tabela,1,r,5);
    natisniTabelo(tabela, n);
    zamenjaj(tabela,0,r,6);
    natisniTabelo(tabela, n);

    if(jeUrejena(tabela, n)){
        printf("ta nad mano je urejena\n\n\n");
    }
    zamenjaj(tabela,6,r,0);
    natisniTabelo(tabela, n);
    */

    return 0;
}
