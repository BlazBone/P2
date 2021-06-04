#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ZGORNJA_MEJA_DOLZINE 1000000

int main(int argc, char const *argv[])
{
    // 2 kazalca na datoteki edn odprira in bere drugi bo pisal

    FILE *beri;
    FILE *pisi;

    if (argc < 3)
    {
        exit(1);
    }

    beri = fopen(argv[1], "r");
    if (beri == NULL)
    {
        printf("napaka beri\n");
        return 1;
    }
    
    pisi = fopen(argv[2], "w");
    if (pisi == NULL)
    {
        printf("napaka pisi\n");
        return 1;
    }
    char *line = malloc((ZGORNJA_MEJA_DOLZINE + 1) * sizeof(char));

    int length = 0;
    while (fgets(line, (ZGORNJA_MEJA_DOLZINE + 1), beri))
    {
       if (strlen(line) > length)
       {
            length = strlen(line);
            line[length -1] = '\0';
            //printf("%s",line);
            pisi = freopen(argv[2], "w",pisi);
            fprintf(pisi,"%s", line);
       }
    }
    

    free(line);
    fclose(beri);
    fclose(pisi);
    
}
