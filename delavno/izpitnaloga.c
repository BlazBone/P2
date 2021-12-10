#include <stdio.h>
#include <stdlib.h>

void izpisi(int n, char *tabela)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", tabela[i]);
    }
    printf("\n");
}

void f(int n, char *tabela, int index)
{
    if (index== n)
    {
        izpisi(n, tabela);
        return;
    }else {
        if (index%2 == 0)
        {
            for (int i = 0; i < 10; i++)
            {
                tabela[index] = '0' + i;
                f(n, tabela, index+1);
            }   
        }else {
            tabela[index] = '+';
            f(n, tabela, index+1);
            tabela[index] = '-';
            f(n, tabela, index+1);
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    char *a;
    a = malloc(2*n);
    f(n+n -1, a, 0);
    return 0;
}


