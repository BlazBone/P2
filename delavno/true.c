#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void izpisi(int *elems, int size, int st)
{
    printf("{");
    if (st == 1)
    {
        for (int i = 0; i < size; i++)
        {
            if (elems[i] != 0)
            {
                printf("%d", elems[i]);
            }
        }
    }
    else
    {

        for (int i = 0; i < size; i++)
        {
            if (elems[i] != 0)
            {
                
                printf("%d", elems[i]);
                
                if (st > 1)
                {
                    printf(", ");
                }
                st--;
                
            }
        }
    }

    printf("}\n");
}

void subSet(int size, int *elems, int index, int st)
{
    if (index == size)
    {
        izpisi(elems, size, st);
        return;
    }
    else
    {
        subSet(size, elems, index + 1, st);
        int a = elems[index];
        elems[index] = 0;
        subSet(size, elems, index + 1, st - 1);
        elems[index] = a;
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,1};

    subSet(15, a, 0, 15);

    return 0;
}
