#include <stdio.h>
#include <stdlib.h>

#define MAKS_DOLZINA_IMENA 100

int indeksMinimuma(int* blok, int dolzina)
{
    int minimum = -1;
    int indexMin = 0;
    for (int i = 0; i < dolzina; i++)
    {
        if(blok[i] >=0 && (indexMin < 0 || blok[i] < blok[indexMin])){
            indexMin = i;
        }
    }
    return indexMin;


}


int main(int argc, char const *argv[])
{
    int stDatotek;
    scanf("%d",&stDatotek);

    
    char *imeDatoteke = malloc(MAKS_DOLZINA_IMENA + 1);
    FILE **vhodi = malloc(stDatotek * sizeof(FILE*));
    

    for (int i = 0; i < stDatotek; i++)
    {
        scanf("%s", imeDatoteke);
        vhodi[i] = fopen(imeDatoteke, "r");
    }
    //izhodna
    scanf("%s", imeDatoteke);
    FILE *izhod = fopen(imeDatoteke, "w");
    
    //st chodnih datotek pri katerih smo zer pirspeli do konca
    //st -1 v tabeli blok
    int stKoncanih = 0;
    int *blok = malloc(stDatotek * sizeof(int));

    for (int i = 0; i < stDatotek; i++)
    {
        int stPrebranih = fscanf(vhodi[i], "%d", &blok[i]);

        if (!stPrebranih)
        {
            blok[i] = -1;
            stKoncanih++;
        }
        
    }

    while (stKoncanih<stDatotek)
    {
        int iMin = indeksMinimuma(blok, stDatotek);
        fprintf(izhod, "%d\n", blok[iMin]);

        if (fscanf(vhodi[iMin], "%d", &blok[iMin]) < 1)
        {
            blok[iMin] = -1;
            stKoncanih++;
        }
        

    }
    


    /*
    for (int i = 0; i < stDatotek; i++)
    {
        printf("%d\n",blok[i]);
    }
    */
    










    free(blok);
    for (int i = 0; i < stDatotek; i++)
    {
        fclose(vhodi[i]);
    }
    fclose(izhod);
    free(vhodi);
    free(imeDatoteke);
    return 0;
}
