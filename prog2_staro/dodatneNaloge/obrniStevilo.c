#include <stdlib.h>
#include <stdio.h>

void obrniArray(int *n)
{
   int dolzina = sizeof(n)/sizeof(int);
    //printf("%d\n", dolzina);
   if (*n == 19)
   {
       printf("%d ", *n);
       return;
   }else {
       obrniArray(n+1);
       printf("%d ", *n);
   }
   

}



int main(int argc, char const *argv[])
{
    int *n;
    n =malloc(20*sizeof(int));

    for (int i = 0; i < 20; i++)
    {
        n[i] = i;
    }
    size_t dolzina = sizeof(n)/sizeof(n[0]);
    printf("        %ld\n", dolzina);
    obrniArray(n);
    return 0;
}
