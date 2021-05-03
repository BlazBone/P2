#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int stZetonov, velikostKupa;
int ostanek;
int velikost;

void natisniTabelo(int *tabela)
{
    for (int i = 0; i < velikost; i++)
    {
        if (i + 1 == velikost )
        {
            printf("%d",tabela[i]);
        } 
        else if (i % 2 == 0)
        {
            printf("%d -> ",tabela[i]);
        }else
        {
            printf("[%d] -> ",tabela[i]);
        }
        
        
        
    }
    
    printf("\n");

}


void rek(int stZetonovMax, int stZetonov, int velikostKupa, int *tabela)
{
    //printf("zacetek funkcije: %s\n", string);
    if (stZetonov == stZetonovMax)
    {
        natisniTabelo(tabela);
        //printf("%s\n",string);
        return;
    }
    
    

    for (int i = 1; i <= velikostKupa; i++)
    {
        //char *s = malloc(sizeof(char) * 20);
        //sprintf(s, "[%d] -> %d", i, velikostKupa + 1 - i);
        //printf("        %s\n", s);
        //strcat(string, s);
        
        if (stZetonov == ostanek)
        {
            //printf("if %d\n", stZetonov);
            tabela[1] = i;
            tabela[2] = velikostKupa + 1  - i;
        }else {
            //printf("else %d\n", stZetonov);
            int a = (stZetonov - ostanek)/(velikostKupa + 1)*2 + 1;
            tabela[a] = i;
            tabela[a + 1] = velikostKupa + 1  - i;

        }
        
        
        rek(stZetonovMax, stZetonov + velikostKupa + 1, velikostKupa, tabela);
    }
    


}

int main(int argc, char const *argv[])
{
    
    scanf("%d%d",&stZetonov, &velikostKupa);

    ostanek = stZetonov % (velikostKupa + 1);
    
    velikost = (((stZetonov - ostanek)/(velikostKupa + 1) * 2) + 1);
    int *tabela = malloc(sizeof(int)* (((stZetonov - ostanek)/(velikostKupa + 1) * 2) + 1));
    tabela[0] = ostanek;
    //printf("%d\n", velikost);
    
    
    if (!ostanek)
    {
        printf("CRNI\n");
    }else {
        //printf("BELI ZMAGA + %d\n", ostanek);
        rek(stZetonov, ostanek, velikostKupa, tabela);
    }
    //printf("\n\n\n\n\n");
    

    return 0;
}
