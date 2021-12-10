#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool vsebuje(char *line, char c)
{
    int dolzina = strlen(line);
    for (int i = 0; i < dolzina; i++)
    {
        if (line[i] == c)
        {
            return true;
        }
    }

    return false;
}


void izpisi(FILE *in, FILE *out, char c)
{
    char *temp, *zadnja;
    temp = malloc(1001);
    zadnja = malloc(1001);

    while (fgets(temp,1001,in) != NULL)
    {
       if (vsebuje(temp, c))
       {
           strcpy(zadnja, temp);
       }
       
    }
    
    fprintf(out, "%s", zadnja);
    free(zadnja);
    free(temp);


}


int main(int argc, char const *argv[])
{
    FILE *in, *out;
    char *vhod, *izhod;
    vhod = malloc(200);
    izhod = malloc(200);
    char c;
    scanf("%s%s%c",vhod, izhod, &c);

    in = fopen(vhod, "r");
    out = fopen(izhod, "w");

    izpisi(in, out, c);
    free(vhod); free(izhod);
    fclose(in);
    fclose(out);

    return 0;
}
