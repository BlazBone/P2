#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prejsni, trenutni;
    scanf("%d", &prejsni);

    while (scanf("%d", &trenutni) != EOF)
    {
        if ((prejsni > 0 && trenutni > 0) || (prejsni < 0 && trenutni < 0))
        {
            prejsni = trenutni;
        }else
        {
            printf("%d\n", prejsni);
            prejsni = trenutni;
        }
        
    }
    printf("%d\n", trenutni);
    
    return 0;
}
