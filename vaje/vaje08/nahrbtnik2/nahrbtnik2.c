#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int MEMO[1001][2][1001];

int optCena(int stPredmetov, int *prostornine, int *cene, int ix, int vNah, bool zeLiho)
{
  
   if (ix == stPredmetov)
   {
       return 0;
   }
    
    
    if (MEMO[ix][zeLiho][vNah] > 0)
    {
        return MEMO[ix][zeLiho][vNah];
    }
    

    //moznost 1
    int najCena = optCena(stPredmetov,prostornine,cene,ix + 1, vNah, zeLiho);
    
    bool lihaProstornina = (prostornine[ix] % 2 == 1);
    
    if (prostornine[ix] <=vNah &&(!lihaProstornina || !zeLiho))
    {
        //moznost 2
        int c = cene[ix] + optCena(stPredmetov,prostornine,cene,ix+1,vNah - prostornine[ix], lihaProstornina || zeLiho);

        if (c >najCena)
        {
            najCena = c;
        }   
    }
    MEMO[ix][zeLiho][vNah] = najCena;
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

    
    printf("%d\n",optCena(n,volumni,cene,0,v, false));




    return 0;
}