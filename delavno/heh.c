#include <stdio.h>
#include <stdlib.h>

int vsota(int* stevila, int*indexi, int k)
{
    int vsota = 0;

    for (int i = 0; i < k; i++)
    {
        vsota+=stevila[indexi[i]];
    }
    

}

int sanse(int n, int k, int v, int stevila)
{


    
}

int main(int argc, char const *argv[])
{
    int n,k,v, *stevila;
    scanf("%d%d%d",&n,&k,&v);
    stevila = calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&stevila[i]);
    }
    

    return 0;
}
