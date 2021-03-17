#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int stStevk(int n)
{
    int stStevk =0;
    while (n >= 1)
    {
        n = n /10;
        stStevk++;
    }
    
    return stStevk;
}

bool isPandigital (int n)
{
    int stevke[stStevk(n)];
    bool jepandigitalna = false;
    int st = stStevk(n);
    int i = 0;
    while (n >= 1)
    {
        stevke[st - 1 - i] = n % 10;
        n = n / 10;
        i++;
    }
    
    for (int i = 1; i <= st; i++)
    {
        for (int j = 0; j < st; j++)
        {
            if(i == stevke[j]){
                jepandigitalna = true;
            }
        }
        if(!jepandigitalna){
            return false;
        }
        jepandigitalna = false;
        
    }
    

    return isPandigital;
}

bool isPrime(int n)
{
    bool isPrime = true;

    for (int i = 2; i <= (int)sqrt(n) + 1; i++)
    {
        if( n % i == 0){
            isPrime = false;
        }
    }
    

    return isPrime;
}


int main() {
    
    int stevilo = 5;

    

    while(stevilo < 999999999)
    {
        if(isPrime(stevilo) && isPandigital(stevilo)){
            printf("stevilo %d ima %d stevk\n", stevilo, stStevk(stevilo));
        }

        stevilo += 2;
    }

    return 0;
}