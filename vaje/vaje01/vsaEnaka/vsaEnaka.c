#include <stdio.h>


int main()
{   
    int stPonovitev = getchar() - '0';
    getchar();

    int stevilo = getchar() - '0';
    
    for (int i = 1; i < stPonovitev; i++)
    {
        getchar();
        if(stevilo != (getchar() - '0')) {
            putchar('0');
            return 0;
        }
    }
    putchar('1');
    putchar('\n');

    return 0;
}