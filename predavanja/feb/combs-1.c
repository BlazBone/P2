#include <stdio.h>

int inner(int i, int j, int k)
{
    printf("%d %d %d\n",i,j,k);
    return 1;
}

int loop3(int n, int i, int j, int k)
{
    if(k == n)
        return 0;
    else 
        return inner(i,j,k) + loop3(n, i, j, k + 1);
}

int loop2(int n, int i, int j)
{
    if(j == n){
        return 0;
    }else {
        return loop3(n, i, j, 0) + loop2(n, i, j + 1);
    }

}
int loop1(int n, int i)
{
    if (i == n){
        return 0;
    }else {
        return  loop2(n, i, 0) + loop1(n, i + 1);
    }
}

int combs(int n)
{
    return loop1(n, 0);
}

int main(void)
{
    printf("%d\n", combs(4));
    return 0;
}