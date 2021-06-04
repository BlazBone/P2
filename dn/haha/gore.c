#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void izpisiTabelo(int**tabela, int visina, int dolzina)
{
    for (int i = 0; i < visina; i++)
    {
        for (int j = 0; j < dolzina; j++)
        {
            if (tabela[i][j] == 2)
            {
                 printf("/");
            }else if (tabela[i][j] == 1){
                 printf("\\");
            }else {
                 printf(".");
            }
            
        }
        printf("\n");
    }
    
}

int heightDiff(char *inp)
{
    int maxDiff = 0;
    int diff = 0;
    for (int i = 0; i < strlen(inp); i++)
    {
        if (inp[i] == 'G')
        {
            diff++;
        }else if (inp[i] == 'D'){
            diff--;
        }
        if (maxDiff < diff)
        {
            maxDiff =diff;
        }
        
    }
    

    //printf("%d" ,maxDiff);
    return maxDiff;
}
void polniTabelo(int** tabela, char *premiki, int a)
{
    int i = a- 1; 
    
    for (int j = 0; j < strlen(premiki); j++)
    {
        if (premiki[j] == 'G')
        {
            if (j != 0)
            {
                if(tabela[i][j - 1] == 2){
                    i--;
                }
                
            }
            
            tabela[i][j] = 2;
        }else if (premiki[j] == 'D'){
            
             if (j != 0)
            {
                if(tabela[i][j - 1] == 1){
                    i++;
                }
                
            }
            
            tabela[i][j] = 1;
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    int stPremikov;
    scanf("%d", &stPremikov);
    char *premiki = malloc(sizeof(char)*stPremikov + 1);
    scanf("%s", premiki);

    int a = heightDiff(premiki);

    int **y = malloc(sizeof(int*)*a);
    for (int i = 0; i < a; i++)
    {
        y[i] = malloc(sizeof(int) * stPremikov);
    }
    polniTabelo(y, premiki, a);
    

    izpisiTabelo(y, a, stPremikov);
    printf("%d %d", y[1][2], y[1][1]);
        return 0;
}
