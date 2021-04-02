#include <stdio.h>


int numCalls = 0;
int fakulteta_rek(int a)
{
    numCalls++;
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return a * fakulteta_rek(a - 1);
    }
}

int fakt0()
{
    return 0;
}
int fakt1()
{
    return 1 * fakt0();
}
int fakt2()
{
    return 1 * fakt1();
}
int fakt3()
{
    return 1 * fakt2();
}
int fakt4()
{
    return 1 * fakt3();
}

int fakulteta_itr(int a)
{
    int sum = 1;
    while (a > 1)
    {
        sum *= a;
        a--;
    }
    return sum;
}

int main(void)
{
    /*
    for (int i = 0; i < 100; i++)
    {
        printf("%d! = %d\n",i, fakulteta_itr(i));
    }
    */
    for (int i = 0; i < 16; i++)
    {
        numCalls = 0;
        printf("%d! = %d", i, fakulteta_rek(i));
        printf("(%d)\n", numCalls);
    }
   
    return 0;
}
