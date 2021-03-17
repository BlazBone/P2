#include <stdio.h>
#include <stdbool.h>
int main() 
{
    int n = 0;
    int c;

    while(1){
        c = getchar ();
        if( ('0' <= c) && (c <= '9') ){
            n = n * 10 + (c - '0');
            continue;
        }
        printf("%d\n", c == '\n');
        if(c == '\n')
            break;
        else {
            printf("NAPAKA\n");
            return 1;
        }
    }

    printf("%d\n", n);
    return 0;
}