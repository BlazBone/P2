#include <stdio.h>

int elems[1000];
int stKombinacij = 0;
void kombinacije(int n, int *elems, int najvecjeSt, int mestoSpremembe)
{
    if(mestoSpremembe == n)
    {
        stKombinacij++;
            for (int j = 0; j < n; j++)
                printf("%d ",elems[j]);
            printf("\n");        
    }else
    {
        for (int i = 1; i <= najvecjeSt; i++)
        {
            elems[mestoSpremembe] = i;
            kombinacije(n, elems, najvecjeSt, mestoSpremembe + 1);
        }   
    }
}




int main(int argc, char const *argv[])
{
    kombinacije(4, elems, 9, 0);
    printf("%d\n",stKombinacij);
    return 0;
}
