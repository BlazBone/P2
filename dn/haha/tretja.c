#include <stdio.h>
#include <stdlib.h>

void izpisiMnozico(int *mnozica, int size)
{
    printf("{");
    for (int i = 0; i < size; i++)
    {
        if (i !=size - 1)
        {
           printf("%d, ",mnozica[i]);
        }else {
            printf("%d",mnozica[i]);
        }
        
    }
    printf("}");
}

void mnozice (int *stevila, int *stack, int koliko, int maksDolzina)
{
    
}






int main(int argc, char const *argv[])
{
    int b;
    scanf("%d", &b);

    int *stevila = malloc (b * (sizeof(int)));
    int *stack = malloc (b * (sizeof(int)));
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &stevila[i]);
    }
    mnozice (stevila, stack, 0, b);

    return 0;
}