#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int MEMO[1001][1001];

int optCena(int stPredmetov, int *prostornine, int *cene, int ix, int vNah)
{
  
   if (ix == stPredmetov)
   {
       return 0;
   }
    
    if (MEMO[ix][vNah] > 0)
    {
        return MEMO[ix][vNah];
    }
    

    //moznost 1
    int najCena = optCena(stPredmetov,prostornine,cene,ix + 1, vNah);
    if (prostornine[ix] <=vNah)
    {
        //moznost 2
        int c = cene[ix] + optCena(stPredmetov,prostornine,cene,ix+1,vNah - prostornine[ix]);

        if (c >najCena)
        {
            najCena = c;
        }   
    }
    MEMO[ix][vNah] = najCena;
    return najCena;
}




int main(void)
{
    int v;
    int n;
    scanf("%d%d",&v,&n);

    int *volumni = malloc(sizeof(int)*n);
    int *cene = calloc(sizeof(int), n);
    


    for (int i = 0; i < n; i++)
    {
        scanf("%d", &volumni[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &cene[i]);
    }

    
    printf("%d\n",optCena(n,volumni,cene,0,v));




    return 0;
}