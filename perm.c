#include <stdio.h>
#include <stdlib.h>

void izpisi(int* tabela, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ",tabela[i]);
    }
    printf("\n");


}
int counter = 0;
void perm(int n, int* tabela, int index)
{
    if (index == n - 1)
    {
        izpisi(tabela, n);
        counter++;
        return;
    }else {
        for (int i = index; i < n; i++)
        {
            int temp = tabela[index];
            tabela[index] = tabela[i];
            tabela[i]=temp;
            perm(n,tabela,index+1);
            temp = tabela[index];
            tabela[index] = tabela[i];
            tabela[i]=temp;
        }
        
    }
    


}


int main(int argc, char const *argv[])
{
    
    int n, *tabela;
    scanf("%d",&n);
    tabela = calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        tabela[i] = i+1;
    }
    
    perm(n, tabela, 0);
    printf("st permutacij= %d\n", counter);

    return 0;
}
