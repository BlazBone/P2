#include <stdio.h>
#include <stdbool.h>
#define MEJA 100000000000000000


long obrni(long a)
{
    int m = 0;
    while (a >= 1)
    {
        m = 10*m + (a%10);
        a /= 10;
    }
    return m;
}

bool jePali(long a)
{
    return a == obrni(a);
}

bool jeLynch(long a, int ponovitev)
{
    int i = 0;
    do
    {
        a += obrni(a);
        i++;
    } while (!jePali(a) && i < ponovitev && a <= MEJA);

    return !jePali(a);
}



int main(void)
{

    int maxPonovitev = 0;
    int spMeja = 0;
    int zgMeja = 0;

    scanf("%d%d%d", &maxPonovitev, &spMeja, &zgMeja);
    int count = 0;
    for (long i = spMeja; i <= zgMeja; i++)
    {
        if (jeLynch(i, maxPonovitev))
        {
            count++;
        }
        
    }
    
    printf("%d\n",count);
    return 0;
}