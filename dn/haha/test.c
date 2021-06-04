#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int memo[10000];

bool isPrime(int n, int i)
{
    if (i >=  n)
    {
        return true;
    }

    if (n % i == 0)
    {
        return false;
    }
    isPrime(n , i +1);
    

}


int main(int argc, char const *argv[])
{
    printf("%d\n", isPrime(5, 2));
    printf("%d\n", isPrime(4,2));
    printf("%d\n", isPrime(128,2));
   
    return 0;
}
