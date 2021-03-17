#include <stdio.h>
#include <stdbool.h>


bool nicelna()
{
    bool jeKonec = false;
    char c = getchar();
    if (c == ' ')
    {
        putchar('1');
    }else if (c == '\n')
    {
        putchar('1');
        jeKonec = true;
    }else{
        putchar('0');

        do
        {
            c = getchar();
        } while (c != ' ' && c != '\n');
        
    }
    
    if (c == '\n'){
        //printf("zadnja\n");
        jeKonec = true;
    }

    return jeKonec;
}

bool stevka()
{
    bool jeKonc = false;
    bool napacniZnak = false;
    char c;
    do
    {
        c = getchar();
        if ( (c > '9' || c < '0') && c != ' ' && c != '\n')
        {
            //printf("here\n");
            napacniZnak = true;
        }
        
    } while (c != ' ' && c != '\n');
    
    napacniZnak ? putchar('0') : putchar('1');
    

    if (c == '\n'){
        //printf("zadnja stevke\n");
        jeKonc = true;
    }

    return jeKonc;
}

bool obdelajDoNovega()
{
    char c;
    bool jeKonc = false;
    do
    {
        c = getchar();
    } while (c != ' ' && c != '\n');
    
    if (c == '\n')
    {
        jeKonc = true;
    }
    putchar('0');

    return jeKonc;
}

bool predznak(){
    bool jeKonec = false;
    char c = getchar();
    if (c == '0')
    {
        jeKonec = nicelna();
    }else if (c <= '9' && c >= '0')
    {
        jeKonec = stevka();
    }else if(c == ' ')
    {
        putchar('0');
    }else if(c == '\n')
    {
        putchar('0');
        jeKonec = true;
    }else{
        jeKonec = obdelajDoNovega();
    }

    
    return jeKonec;
}


int main(int argc, char const *argv[])
{

    char zacetni = 'o';
    bool jeKonc = false;
    
    while (!jeKonc)
    {
        zacetni = getchar();

        if (zacetni == '0')
        {
            jeKonc = nicelna();
        }else if (zacetni >= '1' && zacetni <= '9')
        {
            jeKonc = stevka();
        }else if(zacetni == '-' || zacetni == '+'){
            jeKonc = predznak();
        }else{
            //printf("tuki");
            jeKonc = obdelajDoNovega();
        }
        
            
    }
    
    putchar('\n');
        

    return 0;
}
