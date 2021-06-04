#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char *c = malloc(100);


    scanf("%s", c);

    for (size_t i = 0; i < 100; i++)
    {
        printf("%c",c[i]);
    }
    
    printf("\n%s\n", c);

    return 0;
}
