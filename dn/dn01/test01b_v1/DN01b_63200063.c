#include <stdio.h>

void natisni(int n) {
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n / 10 != 0)
        natisni(n / 10);
    putchar((n % 10) + '0');
}

int main(void)
{
    int dolzinaVhoda = 0;
    char c;
    int prvaEnica = 99999999;
    int stEnic =0;

    do
    {
        c = getchar();
        dolzinaVhoda++;
        switch (c)
        {
        
        case '1':
            if(dolzinaVhoda < prvaEnica){
                prvaEnica = dolzinaVhoda;
            }
            stEnic++;
            break;
        default:
            break;
        }
    } while (c != '\n');
    
    int log = stEnic > 2 ? dolzinaVhoda - prvaEnica  : dolzinaVhoda - prvaEnica - 1;
    natisni(log);
    putchar('\n');

    return 0;
}