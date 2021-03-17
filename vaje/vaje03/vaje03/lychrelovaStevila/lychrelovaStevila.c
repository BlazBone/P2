#include <stdio.h>
#include <stdbool.h>

long obrniStevke(long n)
{
    long obrnjen = 0;
    while (n >= 1)
    {
        obrnjen *= 10;
        obrnjen = obrnjen + (n % 10);
        n /= 10;
    }
    return obrnjen;
}

bool jePalindrom(long n)
{
    long orgVerzija = n;
    long obrnjenaVerzija = obrniStevke(n);
    if(orgVerzija == obrnjenaVerzija){
        return true;
    }
    return false;
}

int main(void)
{
    long maxStPonovitev, spodnjaMeja, zgornjaMeja;
    scanf("%ld %ld %ld", &maxStPonovitev, &spodnjaMeja, &zgornjaMeja); 
    int count = 0;
    bool jeBil = false;
    for (long i = spodnjaMeja; i <= zgornjaMeja; i++)
    {
        jeBil = false;
        long n = i;
        int j = 0;
        //int..........................................................................
       
       do
       {
           jeBil = jePalindrom(n);
          
           
           n += obrniStevke(n);
           j++;
       } while (j <= maxStPonovitev && !jeBil && n <= 100000000000000000);
       
         if (!jeBil)
        {
               count++;
        }

        
        
    }

    printf("%d\n", count);

    return 0;
}