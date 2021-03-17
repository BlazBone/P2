#include <stdio.h>

int combs(int n, int i1, int i2, int i3)
{
    printf("%d %d %d\n", i1, i2, i3);

    i3 = i3 + 1;
    if (i3 == n){
        i3 = 0;
        i2++;
        if (i2 == n)
        {
            i2 = 0;
            i1++;
        }
    }
    if(i1 == n){
        return 1;
    }else {
        return 1 + combs(n, i1, i2, i3);
    }
    /*
    int stevec = 0;
    for(int i1 = 0; i1 < n; i1++){
        for(....){
            for(....){
                printf("%d %d %d")..
                stevec++;
            }
        }
    }
    */
}

int main(void)
{

    printf("%d\n", combs(5, 0, 0, 0));
    return 0;
}