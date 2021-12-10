#include <stdio.h>


int main(int argc, char const *argv[])
{
    int a[] = {9,5,6,7,12,9,10,32,43,12,23,6,12,5,6,1,1,0,2};
    
    int temp = 0;

    for (int i = 0; i < 18; i++)
    {
        for (int j = 0; j < 18; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
        
    }

    for (int i = 0; i < 19; i++)
    {
        printf("%d ", a[i]);
    }
    
    printf("\n");
    

    return 0;
}
