#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

char isNumber(int c)
{
    if (c >= '0' && c <= '9') {
        return 1;
    }
    return 0;
}

int main()
{
    int c;
    int prejsni = ' ';
    int stevilka = 0;
    int vsota = 0;
    char beremo = 0;
    while ((c = getchar()) != EOF) {
        if (isNumber(c) && prejsni == ' ' && beremo == 0) {
            beremo = 1;
            stevilka = c - '0';
        }else if (beremo) {
            if (isNumber(c)) {
                stevilka *= 10;
                stevilka += (c - '0');
            } else if(c == ' ' || c== '\n'){
                beremo = 0;
                // printf("%d\n", stevilka);
                vsota += stevilka;
                stevilka = 0;
            }else
            {
                beremo = 0;
                stevilka = 0;
            }
            
            
        }
        prejsni = c;
    }
    printf("%d\n", vsota);

    return 0;
}