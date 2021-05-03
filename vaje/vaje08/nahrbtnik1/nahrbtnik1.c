#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    int n;
    int stpredmetov;
    scanf("%d%d",&n,&stpredmetov);

    int *volumni = malloc(sizeof(int)*n);
    int *cene = calloc(sizeof(int), n);
    float *relacija = calloc(sizeof(float), n);


    for (int i = 0; i < stpredmetov; i++)
    {
        scanf("%d", &volumni[i]);
    }
    for (int i = 0; i < stpredmetov; i++)
    {
        scanf("%d", &cene[i]);
    }

    for (int i = 0; i < stpredmetov; i++)
    {
        relacija[i] = (float)cene[i]/(float)volumni[i]; 
    }
    int skupajvolumn = 0;
    int skupajcena = 0;
    int j = 0;
    while (skupajvolumn!=n && j < stpredmetov)
    {
        float max = 0;
        int index = 0;
        for (int i = 0; i < stpredmetov; i++)
        {
            if (max < relacija[i])
            {
                //printf("max:%d  index:%d relacija:%f\n",max,index,relacija[i]);
                max = relacija[i];
                index = i;
            }
        }
        relacija[index] = -3;
        if (skupajvolumn + volumni[index] <= n)
        {
            //printf("volumen :%d     cena: %d  index:%d\n",volumni[index], cene[index], index);
            skupajvolumn += volumni[index];
            skupajcena += cene[index];
        }
        
        j++;

        
    }
    
    printf("%d\n",skupajcena);
    //printf("%d\n",skupajvolumn);
    


    return 0;
}