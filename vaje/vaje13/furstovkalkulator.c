#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_IZRAZ 1000

bool furstoklepaji(char *izraz, int dolzina)
{
    if (izraz[0] != '(' && izraz[dolzina - 1] != ')')
    {
        return false;
    }

    int bilanca = 1;

    for (int i = 1; i < dolzina - 1; i++)
    {
        if (izraz[i] == '(')
        {
            bilanca++;
        }
        else if (izraz[i] == ')')
        {
            bilanca--;
            
            if (bilanca < 1)
            {
                return false;
            }   
        }
    }

    return true;
}

bool odvecniParOklepajev(char *izraz, int dolzina)
{
    if (izraz[0] == '(' && izraz[strlen(izraz) - 1] == ')')
    {
        int stPrvih = 0;
        int stDrugih = 0;
        for (int i = 0; i < strlen(izraz); i++)
        {
            if (izraz[i] == '(')
            {
                stPrvih++;
            }
            else if (izraz[i] == ')')
            {
                stDrugih++;
            }

            if (stDrugih == stPrvih)
            {
                if (i == (strlen(izraz) - 1))
                {
                    return true;
                }

                return false;
            }
        }
        return true;
    }
    return false;
}

int najboljDesniNajsibkejsiOperator(char* izraz, int dolzina)
{
    int bilanca = 0;
    int zadnjiPM = -1;
    int zadnjiKD = -1;

    for (int i = 0; i < dolzina; i++)
    {
        char znak = izraz[i];
        if (znak == '(' || znak == ')')
        {
            bilanca += (znak == '(') ? 1 : (-1);
        }else if(bilanca == 0){
            if (znak == '+' || znak == '-')
            {
                zadnjiPM = i;
            } else if (znak == '*' || znak == '/')
            {
                zadnjiKD = i;
            }
            
        }
        
    }
    
    return (zadnjiPM >=0) ? zadnjiPM : zadnjiKD;


    
}







int izracunaj(char *izraz)
{
    int dolzina = strlen(izraz);

    while (odvecniParOklepajev(izraz, dolzina))
    {
        izraz[dolzina - 1] = '\0';
        izraz++;
        dolzina -= 2;
    }

    int polozaj = najboljDesniNajsibkejsiOperator(izraz, dolzina);

    if (polozaj < 0)
    {
        return izraz[0] - '0';
    }

    char operator= izraz[polozaj];

    int desni = izracunaj(izraz + polozaj + 1);

    izraz[polozaj] = '\0';
    int levi = izracunaj(izraz);

    switch (operator)
    {
    case '+':
        return levi + desni;
        break;
    case '-':
        return levi - desni;
        break;
    case '*':
        return levi * desni;
        break;
    case '/':
        return levi / desni;
        break;
    default:
        return 0;
        break;
    }
}

int main(int argc, char const *argv[])
{
    char *izraz = malloc((MAX_IZRAZ + 1) * sizeof(char));
    scanf("%s", izraz);

    printf("%d\n", izracunaj(izraz));

    free(izraz);
    return 0;
}
