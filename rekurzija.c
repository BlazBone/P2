#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int stStevk(int a)
{
    int count = 0;

    while (a >= 1)
    {
        a = a/10;
        count++;
    }
    
    return count;
}

int fakt(int a)
{
    int fakt = 1;

    for (int i = 1; i <= a; i++)
    {
        fakt = fakt * i;
    }
    

    return fakt;
}

bool jeFakt(int a, int stevke[])
{
    int vsota = 0;
    for (int i = 0; i < stStevk(a); i++)
    {
        //printf("%d-ta stevka je %d\n", i, stevke[i] );
        vsota = vsota + fakt(stevke[i]);
        //printf("hehehe %d\n", vsota);
    }
    



    if(fakt(a) == vsota){
        return true;
    }

    return false;;
}



int main()
{
  
    for (int j = 1; j <  10000000; j++)
    {
        int stevke[stStevk(j)];

        //printf("%d\n", j);
        int a = j;
        int st = stStevk(j);
        for (int i = 0; i < st; i++)
        {
            stevke[st - 1 - i] = a % 10;
            a = a / 10;
            //printf("%d ", stevke[st - 1 - i]); 
        }
       

        int vsota = 0;
        for (int i = 0; i < stStevk(j); i++)
        {
            //printf("%d-ta stevka je %d      ", i, stevke[i] );
            vsota = vsota + fakt(stevke[i]);
            //printf("hehehe %d\n", vsota);
        }
        
        //printf("\n");
        //printf("vsota je %d\n", vsota);
        



        if(j == vsota){
            printf("hehe %d\n", j);
        }
            //printf("\n");
        }
        
    
    
  return 0;
}