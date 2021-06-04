#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


bool imaZunanjeOklepaje (char *izraz)
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
            }else  if (izraz[i] == ')')
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


int zracunaj (char *izraz)
{
    char *krajsi = malloc(1000);
    
    while (imaZunanjeOklepaje(izraz))
    {
        int j  = 0;
        free(krajsi);
        krajsi = malloc(1000);
        for (int i = 1; i < strlen(izraz) - 1; i++)
        {
            krajsi[j++] = izraz[i];
        }
        
        izraz = krajsi;
        printf("%s\n", izraz);
    }
    
    




    return 0;
}


int main(int argc, char const *argv[])
{
    char *izraz = malloc(sizeof(char) * 1000);

    scanf("%s", izraz);

    printf("hahahaha %d\n", imaZunanjeOklepaje(izraz));

    zracunaj(izraz);



    free(izraz);

    return 0;
}
