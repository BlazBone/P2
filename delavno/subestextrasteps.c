#include <stdio.h>
#include <stdlib.h>

#define MIN(a,b) (a)<(b)?(a):(b)
#define ABS(a) (a)<0?((a)* -1):(a)

int halo(int stevilo, int *nums, int index, int vsota, int vse)
{
   if (index>stevilo)
   {
       return 0;
   }
   
    if (index == stevilo)
    {
        int a = vse - 2 * vsota;
        return ABS(a);
    }else {
        int a = halo(stevilo,nums, index+1, vsota + nums[index], vse);
        int b = halo(stevilo, nums,index+1,vsota, vse);

        return MIN(a,b);
    }
}

int main(int argc, char const *argv[])
{
    int n, *k;
    scanf("%d", &n);


    k = calloc(n, sizeof(int));
    int vse = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&k[i]);
        vse+=k[i];
    }
    
    
    printf("%d",halo(n,k,0,0,vse));
    return 0;
}
