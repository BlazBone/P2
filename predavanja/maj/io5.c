#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char const *argv[])
{
    
    /*
    for (int i = 0; i < 10; i++)
    {
        int j;
        fprintf(stdout, "OUT\t %d", i);
        fprintf(stderr, "ERR %d", i);
    }
    */
   int n;
    
   for (int i = 0; i < 1000; i++)
   {
       fread(&n, sizeof(int), 1, stdin);
       printf("%d\n", n);
   }
   

    /*
    long int b;
    for (int i = 0; i < 500; i++)
   {
       fread(&b, sizeof(long int), 1, stdin);
       printf("%ld\n", b);
   }
    */
    return 0;
}


