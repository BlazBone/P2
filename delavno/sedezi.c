#include <stdio.h>
#include <stdlib.h>

int halo(int sedezi, int ljudje, int index)
{
    if (index -1 > sedezi)
    {
        return 0;
    }
    

    if (ljudje == 0)
    {
        return 1;
    }else {
        int a = halo(sedezi,ljudje-1,index+2);
        int b = halo(sedezi, ljudje, index+1);
        return a+b;
    }
    
}

int main(int argc, char const *argv[])
{
    int n, k;
    scanf("%d%d", &n,&k);

    printf("%d",halo(n,k,0));
    return 0;
}
