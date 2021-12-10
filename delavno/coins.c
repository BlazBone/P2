#include <stdio.h>

int coins(int stKovancev, int stEnic, int index)
{

    if (stEnic < 0)
    {
        return 0;
    }

    if (index == stKovancev )
    {
        return 1;
    }
    else
    {
        int a = coins(stKovancev, stEnic - 1, index + 1);
        int b = coins(stKovancev, stEnic + 1, index + 1);
        return a + b;
    }
}


int main(int argc, char const *argv[])
{
    int n, k;
    scanf("%d%d", &n,&k);

    printf("%d",coins(n,k,0));
    return 0;
}
