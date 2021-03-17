#include <stdio.h>

int f1klici = 0;

int f1 (int n)
{
    f1klici++;
    int m;
    printf("%d, %d\n", n, m);
    if (n == 1){
        return 1;

    }else{
        return n * f1(n - 1);
    }
}



int f2 (int n)
{
    static int f2calls = 0;    
    f2calls++;
    if(f2calls > 7) printf("!!!!\n");
    int m;
    printf("%d, %d\n", n, m);
    if (n == 1){
        return 1;

    }else{
        return n * f2(n - 1);
    }
}

int rnd (int new_seed)
{
    static int seed = 13;
    if(new_seed != 0){
        seed = new_seed % 19;
    }
    seed = (seed * 42746 + 62831) % 19;
    return seed;
}

int main(void)
{
    printf("%d (haha %d)\n",f1klici, f1(10));
    printf("%d\n", f2(10));
    

    for (int i = 0; i < 100; i++)
    {
        printf("%d  ", rnd(i));
    }
    printf("\n");
    
    return 0;
}