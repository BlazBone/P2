#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void razlike(FILE* prva, FILE* druga, FILE* izhod)
{

    char *prve, *druge;

    prve= malloc(1001 * sizeof(char));
    druge =malloc(1001 * sizeof(char));

    int i = 1;
   
        
    while ( fgets(prve, 1001,prva) != NULL && fgets(druge, 1001,druga) !=NULL){

        if (strcmp(prve, druge) != 0)
        {
            //printf("string1= %s string2= %s\n", prve, druge);
            fprintf(izhod, "%d\n", i);
            fflush(izhod);
        }


        i++;
        strcpy(prve, "");
        strcpy(druge, "");
    }
    
    free(prve);
        free(druge);

}


int main(int argc, char const *argv[])
{
    FILE *ena, *dva, *izhod;

    ena = fopen("vhod.txt", "r");
    dva = fopen("vhod2.txt", "r");
    izhod = fopen("izhod.txt", "w");

    razlike(ena,dva,izhod);
    return 0;
}
