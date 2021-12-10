#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(int argc, char const *argv[])
{
    int n, *tabela;

    bool *copy;

    scanf("%d",&n);

    copy = calloc(sizeof(bool), n);
    int a;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a);

        if (a>=n)
        {
            printf("NE\n");
            return 0;
        }

        if (copy[a])
        {
            printf("NE\n");
            return 0;
        }else{
            copy[a] = true;
        }
        
        
    }
    printf("DA\n");

    return 0;
}
