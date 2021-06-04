#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_VRSTICA 100000


void obrni(FILE* vhod, FILE* izhod)
{
    char *vrstica = malloc(MAX_VRSTICA*sizeof(char));
    
    
    if (fgets(vrstica, MAX_VRSTICA, vhod) == NULL)
    {
        return;
    }else {
        obrni(vhod, izhod);
        fprintf(izhod, "%s", vrstica);
    }
    

}


int main(int argc, char const *argv[])
{
    FILE *vhod = fopen(argv[1], "r");
    FILE *izhod = fopen(argv[2], "w");


    fprintf(stdout, "%d\n",strcmp("aba", "aba"));


    obrni(vhod, izhod);
    fclose(vhod);
    fclose(izhod);
    return 0;
}
