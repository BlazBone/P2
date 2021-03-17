#include <stdio.h>

int i1, i2, i3;

//int a[3]; lahko tudi tukio definiramo in bo staticno

//na skladu je malo placa velikih tabel ne dati na sklad....
int main(void)
{
    //int a[10000000]; tok velika tabela ze ne more iti na sklad
    //dobis segmation fault ker ni vec placa u skladu in se lotis pist k nekm potem pa te ustavi
    //ze pri alokaciji je fault ker nemore tok spomina predpist
    //ce hocemo da je a still notr funkcije damo spredi "static" tako bo lokalna v funkciji main ampa tako NEBO na skladu ampak bo drugje ker je dovolj placa
    //je tam kjer so staticne spremenljivke blizu i1 i2 i3
    // static int a[10000000]
    int a[3];
    printf("int     : %p  %p  %p\n",&i1, &i2, &i3);
    printf("int     : %p  %p  %p\n",&a[0], &a[1], &a[2]);
    


    for (int i = 0; i < 3; i++)
    {
        a[i] = i;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
    
    
    return 0;
}