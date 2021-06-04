#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int vsote(int stevilo, int maxSumand)
{
    if (maxSumand > stevilo)
    {
        maxSumand =stevilo;
    }
    
    if (stevilo == 0)
    {
        return 1;
    }else if (maxSumand == 0)
    {
        return 0;
    } else {
        return vsote(stevilo-maxSumand, maxSumand) + vsote(stevilo, maxSumand - 1);
    }


}


int main(int argc, char const *argv[])
{
    int stevilo, maxSumand;
    scanf("%d%d",&stevilo,&maxSumand);

    printf("%d\n", vsote(stevilo, maxSumand));
    return 0;
}
