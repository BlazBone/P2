#include <stdio.h>
#include <stdbool.h>


int main(void)
{

    bool imaPredznak = false;
    bool imaVecPredznakov = false;
    bool vsebujeCifre = false;
    bool prva = true;
    bool drugiZnaki = false; 
    int dolzinaCifer = 0;
    int prvaCifra = 7;

    char c = 1;
    do
    {
        c = getchar();
        
        switch(c)
       {
           case '0': if(prva) prvaCifra = 0;vsebujeCifre = true; prva = false;  dolzinaCifer++; break;
           case '1': prva = false; vsebujeCifre = true; dolzinaCifer++; break;
           case '2': prva = false; vsebujeCifre = true; dolzinaCifer++; break;
           case '3': prva = false; vsebujeCifre = true; dolzinaCifer++; break;
           case '4': prva = false; vsebujeCifre = true; dolzinaCifer++; break;
           case '5': prva = false; vsebujeCifre = true; dolzinaCifer++; break;
           case '6': prva = false; vsebujeCifre = true; dolzinaCifer++; break;
           case '7': prva = false; vsebujeCifre = true; dolzinaCifer++; break;
           case '8': prva = false; vsebujeCifre = true; dolzinaCifer++; break;
           case '9': prva = false; vsebujeCifre = true; dolzinaCifer++; break;
           case '-': if (imaPredznak || !prva) imaVecPredznakov = true; imaPredznak = true; break;
           case '+': if (imaPredznak || !prva) imaVecPredznakov = true; imaPredznak = true; break;
           case ' ':
                if (imaVecPredznakov)
                {
                    //printf("vecpredznakov ");
                    putchar('0');
                }else if (dolzinaCifer == 0)
                {
                    //printf("dolzina cifer ");
                    putchar('0');
                }else if (dolzinaCifer > 1 && prvaCifra == 0){
                    //printf("prvacifra ");
                    putchar('0');
                }else if (!vsebujeCifre){
                    //printf("ne vsebuje cifer ");
                    putchar('0');
                }else if (drugiZnaki)
                {
                    //printf("drugiZnaki ");
                    putchar('0');
                }
                 else {
                     putchar('1');
                    //printf("1 zgleda ok ");
                }
                imaVecPredznakov = false;
                imaPredznak = false;
                vsebujeCifre = false;
                dolzinaCifer = 0;
                prvaCifra = 7;
                drugiZnaki = false;
                prva = true;
                //printf("\n");
                break;
            default:
                drugiZnaki = true;
                break;
                
        }
        
    } while (c != '\n');
     
     if (imaVecPredznakov)
                {
                    //printf("vecpredznakov ");
                    putchar('0');
                }else if (dolzinaCifer == 0)
                {
                    //printf("dolzina cifer ");
                    putchar('0');
                }else if (dolzinaCifer > 1 && prvaCifra == 0){
                    //printf("prvacifra ");
                    putchar('0');
                }else if (!vsebujeCifre){
                    //printf("ne vsebuje cifer ");
                    putchar('0');
                }else if (drugiZnaki)
                {
                    //printf("drugiZnaki ");
                    putchar('0');
                }
                 else {
                     putchar('1');
                    //printf("1 zgleda ok ");
                }
    printf("\n");
    return 0;
}