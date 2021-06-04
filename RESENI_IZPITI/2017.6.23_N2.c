#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void izpisiSkladisce(int** skladisce, int stKupov, int stSkatel) 
{
    for (int j = (stSkatel - 1); j >= 0; j--) 
    {
        for (int i = (stKupov - 1); i >= 0; i--) 
        {
            printf("[%d][%d]\n", i, j);
            printf("%3d", skladisce[i][j]);
        }
        printf("\n");
    }
    
}

int main() 
{
    int stKupov, stSkatel;
    scanf("%d%d", &stKupov, &stSkatel);

    int** skladisce = (int**) malloc(stKupov * sizeof(int*));
    for (int i = 0; i < stKupov; i++)
        skladisce[i] = (int*)calloc(stSkatel, sizeof(int));
    //izpisiSkladisce(skladisce, stKupov, stSkatel);

    int stOdstranitev;
    scanf("%d", &stOdstranitev);
    int odstrani;
    int kateriKup = 0;
    int kateraSkatla = 0;
    int kolikoOdstrani = 0;
    for (int i = 0; i < stOdstranitev; i++) 
    {
        scanf("%d", &odstrani);
        kateriKup = odstrani / stSkatel;
        kateraSkatla = odstrani % stSkatel;
        skladisce[kateriKup][kateraSkatla] = 1;
        //printf("odstrani: %d    kup: %d     skatla: %d\n", odstrani, kateriKup, kateraSkatla);
        for (int visina = (stSkatel - 1); visina > kateraSkatla; visina--)
            if (skladisce[kateriKup][visina] == 0) kolikoOdstrani++;
    }
    //izpisiSkladisce(skladisce, stKupov, stSkatel);
    printf("%d\n", kolikoOdstrani);
    return 0;
}