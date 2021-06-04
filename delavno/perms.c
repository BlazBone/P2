#include <stdio.h>
#include <stdlib.h>


void izpisiPermutacijo(int *a, int n)
{
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    printf("\n");
}
int counter = 0;
void perms(int*a, int n, int index)
{
    if (index == n)
    {
        izpisiPermutacijo(a, n);
        counter++;
        return;
    }else {

        for (int i = index; i < n; i++)
        {
            int temp;
            temp = a[index];
            a[index] = a[i];
            a[i]=temp;
            perms(a, n, index+1);
            temp = a[index];
            a[index] = a[i];
            a[i]=temp;
        }
    }
}


int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int *a;
    a = malloc(sizeof(int)* n);

    for (int i = 0; i < n; i++)
    {
        a[i] = i+1;
    }
    

    perms(a,n,0);
    printf("permutacij=%d\n",counter);
    return 0;
}
