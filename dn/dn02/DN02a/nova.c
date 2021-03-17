#include <stdio.h>
#include <stdbool.h>

int preberiVhod()
{
    //printf("Beremo stevilo\n");
    char zacetek = getchar();

    if(zacetek == '0'){
        char c = getchar();
        if (c == ' ')
        {
            putchar('1');
        }else if (c == '\n')
        {
            putchar('1');
            return 1;
        }else{
            //printf("here1\n");
            putchar('0');
        }
        //printf("here2\n");
        do
        {
           //printf("here\n");
            c = getchar();
        } while (c != ' ' && c!= '\n');
        if(c == '\n') {
            //printf("konc");
            return 1;
        }
        
        
    }else if (zacetek <= '9' && zacetek >= '1')
    {
        bool jeVredu = false;
        char naslednji;
        do
        {
            naslednji = getchar();
            if (naslednji == ' ')
            {
                jeVredu = true;
                break;
            }else if(naslednji == '\n'){
                putchar('1');
                return 1;
            }
            

        } while (naslednji <= '9' && naslednji >= '1');
        printf("here\n");
        jeVredu ? putchar('1') : putchar('0');

    }else if (zacetek == '-' || zacetek == '+')
    {
        char nova = getchar();
        if (nova == '0'){
            char nova2 = getchar();
            if (nova2 == ' ' || nova2 == '\n')
            {
                putchar('1');
            }else{
                putchar('0');
            }    
        }
        
        
        
        bool jeVredu = false;
        char naslednji;
        do
        {
            naslednji = getchar();
            if (naslednji == ' ' || naslednji == '\n')
            {
                jeVredu = true;
                break;
            }
            

        } while (naslednji <= '9' && naslednji >= '1');
        
        jeVredu ? putchar('1') : putchar('0');
    }
    
    preberiVhod();

}

int main(void)
{
    preberiVhod();

    return 0;
}