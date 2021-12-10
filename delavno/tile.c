#include <stdio.h>
#include <stdlib.h>

void ja(int *a)
{
    for (int i = 0; i < 2; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
}

void f(int *a, int index)
{
    if (index == 2)
    {
        ja(a);
        return;
    }
    else
    {
        for (int i = 0; i < 2; i++)
        {
            a[index] = i;
            f(a, index + 1);
        }
    }
}

int main(int argc, char const *argv[])
{
    int *a;

    a = calloc(sizeof(int), 2);

    f(a, 0);
    return 0;
}
