#include <stdio.h>
#include <stdlib.h>

int *tabela;

void natisni(int *array, int index)
{
    for (int i = 0; i < index; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}


int sestej(int n, int k , int index)
{
    if (n == 0 && k>=0)
    {
        natisni(tabela, index);
        return 1;
    }

    if (n<=0 || k<=0)
    {
        return 0;
    }
    
    
    tabela[index] = k;
    index++;
    int a = sestej(n-k,k,index);
    int b = sestej(n, k-1,index-1);

    return a+b;
    


}



int main(int argc, char const *argv[])
{
    tabela = calloc(100,sizeof(int));
    int n,k;
    scanf("%d%d", &n,&k);

    printf("%d\n",sestej(n,k,0));
    return 0;
}
