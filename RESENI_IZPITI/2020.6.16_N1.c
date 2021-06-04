#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void obrni(FILE *vhod, FILE *izhod)
{
    char *vrstica = malloc(1000 * sizeof(char));
    if (fgets(vrstica, 1000 * sizeof(char), vhod) != NULL) {
        // printf("PREBEREM = %s\n", vrstica);
        obrni(vhod, izhod);
    }else
    
    // printf("\n");
    // printf("VPISEM = %s\n", vrstica);
    fprintf(izhod, "%s", vrstica);
    free(vrstica);
}

void obrni2(FILE* vhod, FILE* izhod){
    char **vrstice = malloc(sizeof(char)*1000);
    char line[1000];
    int i = 0;
    while (fgets(line, 1000, vhod) != NULL) {
        vrstice[i] = malloc(sizeof(char)*(strlen(line)+1));
        strcpy(vrstice[i], line);
        i++;
    }
    i--;
    while (i >= 0){
        fprintf(izhod,"%s", vrstice[i]);
        free(vrstice[i]);
        i--;
    }  
    free(vrstice);
}

void obrni3 (FILE* vhod, FILE* izhod){
    char **arr = malloc(sizeof(char*));
    int i = 0;
    while(1){
        if(feof(vhod)) break;
        i++;
        arr = realloc(arr, i * sizeof(char*));
        arr[i-1] = malloc(1000 * sizeof(char));
        fgets(arr[i-1], 1000, vhod);
        //printf("%s", arr[i-1]);
    }
    for(int j = i-1; j >= 0; j--){
        fprintf(izhod, "%s", arr[j]);
    }

    for(int j = 0; j < i; j++){
        free(arr[j]);
    }
    free(arr);
}

int main()
{
    FILE *vhod = fopen("vrba.txt", "r");
    FILE *vhod3 = fopen("vrba.txt", "r");
    FILE *vhod2 = fopen("vrba.txt", "r");
    FILE *izhod = fopen("test.txt", "w+");
    FILE *izhod3 = fopen("test3.txt", "w+");
    FILE *izhod2 = fopen("test2.txt", "w+");
    obrni(vhod, izhod);
    obrni2(vhod2, izhod2);
    obrni3(vhod3, izhod3);
    return 0;
}
