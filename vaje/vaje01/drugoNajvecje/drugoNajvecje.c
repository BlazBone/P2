#include <stdio.h>



int main()
{
    int stStevil = getchar() - '0';
    getchar();

    int prvo = getchar() - '0';
    int drugo = -1;
    for (int i = 1; i < stStevil; i++)
    {
        getchar();
        int novo = getchar() - '0';
        if (novo >= prvo) {
            drugo = prvo;
            prvo = novo;
        }
        if(novo < prvo && novo > drugo){
            drugo = novo;    
        }

    }
    putchar(drugo + '0');

    return 0;
}