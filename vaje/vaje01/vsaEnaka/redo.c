#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, *a;
   n = getchar() - '0';
    a = malloc(n * sizeof(int));

    
    int c = 0;
    int d;
    getchar();
    c = getchar();
    for (int i = 0; i < n-1; i++)
    {
        
        getchar();
        d = getchar();
        if (c != d)
        {
           // printf("%c %c\n", c,d);
            printf("0\n");
            return 0;
        }
        c =d;

    }
     printf("1\n");
    return 0;
}
