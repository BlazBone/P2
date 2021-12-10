#include <stdio.h>


int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int najvecje = 0;
    int drugo = 0;
    int temp;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&temp);
      
        
        if (temp > najvecje)
        {
              drugo = najvecje;
            najvecje =temp;
        }else if (temp > drugo && temp<=najvecje)
        {
            drugo = temp;
        }
        
        
    }
    
    printf("%d\n",drugo);
    return 0;
}
