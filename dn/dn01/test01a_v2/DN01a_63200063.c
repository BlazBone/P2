#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int stStevk (int a)
{
    int count = 0;
    if(a < 0) a = a*(-1);
    
    while(a >= 1)
    {   

        a = a / 10;
        count++;
    }

    return count;
}

void natisni(int n) {
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n / 10 != 0)
        natisni(n / 10);
    putchar((n % 10) + '0');
}

int main() {

    int nNeg = 1;
    int mNeg = 1;
    int n = 0;
    int c;
    do{
       c = getchar ();
       switch(c)
       {
           case '0': n = n * 10 + 0; break;
           case '1': n = n * 10 + 1; break;
           case '2': n = n * 10 + 2; break;
           case '3': n = n * 10 + 3; break;
           case '4': n = n * 10 + 4; break;
           case '5': n = n * 10 + 5; break;
           case '6': n = n * 10 + 6; break;
           case '7': n = n * 10 + 7; break;
           case '8': n = n * 10 + 8; break;
           case '9': n = n * 10 + 9; break;
           case '-': nNeg = -1; break;
           case ' ': break;
           default:
                printf("NAPAKA\n");
                return 1;
        }
    }while(c != ' ');

    n = n * nNeg;

    int m = 0;
     do{
       c = getchar ();
       switch(c)
       {
           case '0': m = m * 10 + 0; break;
           case '1': m = m * 10 + 1; break;
           case '2': m = m * 10 + 2; break;
           case '3': m = m * 10 + 3; break;
           case '4': m = m * 10 + 4; break;
           case '5': m = m * 10 + 5; break;
           case '6': m = m * 10 + 6; break;
           case '7': m = m * 10 + 7; break;
           case '8': m = m * 10 + 8; break;
           case '9': m = m * 10 + 9; break;
           case '-': mNeg = -1; break;
           case '\n': break;
           default:
                printf("NAPAKA\n");
                return 1;
        }
   }while(c != '\n');

    m = m * mNeg;


    natisni(n + m);
    putchar('\n');
    return 0;
   
}