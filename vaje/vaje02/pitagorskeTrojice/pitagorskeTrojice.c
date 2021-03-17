#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool jeTrojica(int a,  int b, int c)
{   
    bool jeTrojica = false;
    
    
    if(a*a == b*b + c*c){
        jeTrojica = true;
    }

    return jeTrojica;
}

int main(void)
{
    int k, n;
    int counter = 0;
    scanf("%d%d", &k, &n);

    for (int stevilo = k; stevilo <= n; stevilo++)
    {
        bool obstajaTRojica = false;
        for (int i = 1; i < stevilo; i++)
        {
            for (int j = i + 1; j < stevilo; j++)
            {
               // printf("%d %d %d\n", stevilo ,i ,j);
                if(jeTrojica(stevilo, i, j)){
                    counter++;
                    obstajaTRojica = true;
                    //printf("%d %d %d\n", stevilo ,i ,j);
                    break;
                    
                }
            }
            if(obstajaTRojica){
                break;
            }
            
        }
        
    }
    
   

    printf("%d\n", counter);
    
    

    return 0;
}
