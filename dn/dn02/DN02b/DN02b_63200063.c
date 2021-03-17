#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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


bool sedmiska()
{
    bool jeKonc = false;
    bool napacniZnak = false;
    char c;
    do
    {
        c = getchar();
        if ( (c > '7' || c < '0') && c != ' ' && c != '\n')
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

bool hexa()
{
    bool jeKonc = false;
    bool napacniZnak = false;
    char c;
    int stevec = 0;
    do
    {
        stevec++;
        c = getchar();
        if ( (c > '9' || c < '0') && c != ' ' && c != '\n' && (c < 'A' || c > 'F'))
        {
            //printf("here\n");
            napacniZnak = true;
        }
        
    } while (c != ' ' && c != '\n');
    
    //printf("halo %d\n", stevec);
    
    if (stevec < 2)
    {
        putchar('0');
    }else{
        napacniZnak ? putchar('0') : putchar('1');
    }

    if (c == '\n'){
        //printf("zadnja stevke\n");
        jeKonc = true;
    }

    return jeKonc;
}

bool binarno()
{
    bool jeKonc = false;
    bool napacniZnak = false;
    char c;
    //printf("helo\n");
    int stevec = 0;
    do
    {
        stevec++;
        c = getchar();
        if ( c != '1' && c != '0' && c != ' ' && c != '\n')
        {
            //printf("here %c\n", c);
            napacniZnak = true;
        }
        
    } while (c != ' ' && c != '\n');
    
    
    if (stevec < 2)
    {
        putchar('0');
    }else{
        napacniZnak ? putchar('0') : putchar('1');
    }
    
    

    if (c == '\n'){
        //printf("zadnja stevke\n");
        jeKonc = true;
    }

    return jeKonc;
}

bool prvaNicla()
{
    bool jeKonc = false;

    char naslednja = getchar();
    //printf("    %c\n", naslednja);
    if (naslednja <= '7' && naslednja >= '0')
    {
        jeKonc = sedmiska();
    }else if(naslednja == 'b'){
        //printf("vsaj tuki\n");
        jeKonc = binarno();
    }else if(naslednja == 'x'){
        
        jeKonc = hexa();
    }else if (naslednja == ' ')
    {
        putchar('1');
        jeKonc = false;
    }else if (naslednja == '\n')
    {
        putchar('1');
        jeKonc = true;
    }
    else{
        jeKonc = obdelajDoNovega();
    }
    return jeKonc;
}



int main(void)
{
    char zacetni;
    bool jeKonc = false;
    
    while(!jeKonc)
    {
        zacetni = getchar();
        if (zacetni == '0')
        {
            jeKonc = prvaNicla();
        }else if(zacetni <= '9' && zacetni >= '0'){

            jeKonc = stevka();
        }else{
            jeKonc = obdelajDoNovega();
        }
    }
    putchar('\n');
    return 0;
}