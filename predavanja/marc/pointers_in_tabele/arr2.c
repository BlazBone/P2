#include <stdio.h>

int i1, i2, i3;


//tabele prenasamo samo tako da posljemo prvi element tabele sepravi dobimo naslov samo prve spremeljivke v tabeli,
// zraven tabele je pamerno poslati tudi dolzino tabele


//TABELE VEDNO POSILJAMO PO REFERENCI
void init1(int a[1000000])
{
    for (int i = 0; i < 1000000; i++)
    {
        a[i] = i ;
    }
}


void init2(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
}

void init3(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
}



int main(void)
{
    
    static int a[1000000];
    printf("int     : %p  %p  %p\n",&i1, &i2, &i3);
    printf("int     : %p  %p  %p\n",&a[0], &a[1], &a[2]);
    

    init1(a);

    init2(a, 1000000); //lahko tudi init2(&(a[0]), 1000000);

    init3(&(a[0]), 1000000);

    for (int i = 0; i < 1000000; i+=100000)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
    
    printf("%p %p\n", a, &(a[0])); // naslov "tabele " je enak naslovu prvega elementa
    
    return 0;
}