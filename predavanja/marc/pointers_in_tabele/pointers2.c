#include <stdio.h>



int main(int argc, char const *argv[])
{
    int i = 0;

    printf("i=%4d @->%p\n", i, &i);

    scanf("%d",&i);
    printf("i=%d @->%p\n", i, &i);

    
    return 0;
}
