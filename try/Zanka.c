#include <stdio.h>
#include <stdlib.h>


void natisni(int n, char r)
{
    int index = 0;
    while (index < n)
    {
        printf("%c", r);
        index++;
    }
    

}

int main()
{
    int index = 1;

    while (index <= 20)
    {
        natisni(20 - index, ' ');
        natisni(2 * index, '*');
        //printf("%d\n", index);
        index++;
        printf("\n");
        
    }
    

    return 0;
}