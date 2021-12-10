#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void hahaha(int a, int b, int n, bool *tabela)
{
    tabela[n]=true;

    if (n == 0)
    {

    }else {
        hahaha(a,b,n/a,tabela);
        hahaha(a,b,n/b,tabela);
    }
    

}



int main(int argc, char const *argv[])
{
    int a,b,n;
    scanf("%d%d%d",&a,&b,&n);
    int st = 0;
    bool *tabela;
    tabela = malloc(sizeof(bool)*(n + 3));

    hahaha(a,b,n,tabela);

    
    for (int i = 0; i < n+3; i++)
    {
        if (tabela[i])
        {
            st++;
        }
        
    }
    printf("%d\n",st);


    return 0;
}
