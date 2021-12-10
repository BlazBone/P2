#include <stdio.h>
#include <stdlib.h>


void labirint(int visina, int sirina, int*polja, int *premiki, int index, int stpremika)
{
    if(index == (visina*sirina - 1))
    {
        //izpisemo premike
        printf("\nizpisujemo premike:\n");
        for (int i = 0; i < visina*sirina; i++)
        {
            if (premiki[i]!= -1)
            {
                printf("%d",premiki[i]);
            }
            
           
        }
        return;
        
    }else {
        int leva, desna, gor, dol;
        
        
        leva = (polja[index] /1000) %10;
        desna = (polja[index] /10) %10;
        gor = (polja[index] /100) %10;
        dol = (polja[index] /1) %10;
    printf(" %d %d ", index,stpremika);
    
        
        if (leva == 0)
        {
            premiki[stpremika] = 0;
            polja[index-1] += 10;
            labirint(visina,sirina,polja,premiki,index-1, stpremika+1);
            polja[index-1] -= 10;
             premiki[stpremika] = -1;
        }
        if (desna == 0)
        {
             premiki[stpremika] = 2;
            polja[index+1] += 1000;
            labirint(visina,sirina,polja,premiki,index+1, stpremika+1);
            polja[index+1] -= 1000;
             premiki[stpremika] = -1;
        }
        if (gor == 0)
        {
            premiki[stpremika] = 1;
            polja[index-sirina] += 1;
            labirint(visina,sirina,polja,premiki,index-sirina, stpremika+1);
            polja[index-sirina] -= 1;
             premiki[stpremika] = -1;
        }
        if (dol == 0)
        {
             premiki[stpremika] = 3;
            polja[index+sirina] += 100;
            labirint(visina,sirina,polja,premiki,index+sirina, stpremika+1);
            polja[index+sirina] -= 100;
             premiki[stpremika] = -1;
        }


    }


}




int main(int argc, char const *argv[])
{
    int visina, sirina;
    scanf("%d%d",&visina,&sirina);
    int *polja, *premiki;
    polja = calloc(sirina*visina*3,sizeof(int));
    premiki = calloc(sirina*visina*3,sizeof(int));


    for (int i = 0; i < sirina*visina; i++)
    {
       scanf("%d",&(polja[i]));
       premiki[i] = -1;
       
    }
   
   
    
    labirint(visina, sirina, polja, premiki, 0, 0);

    
    return 0;
}
