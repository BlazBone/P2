#include <stdio.h>
#include <stdlib.h>

int goregoremore(int gor, int dol, int nadmorska)
{      
     
    if (gor == 0 && dol == 0)
    {
        return 1;
    }else {
        int a = 0;
        if (gor > 0 )
        {
            a += goregoremore(gor-1,dol,nadmorska+1);
        }
        if (dol > 0 && nadmorska != 0)
        {
            a += goregoremore(gor,dol-1,nadmorska-1);
        }
        return a;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    
    printf("%d\n",goregoremore(n/2,n/2, 0));
    return 0;
}

