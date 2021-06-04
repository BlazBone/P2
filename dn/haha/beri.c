#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    char *vhod = malloc(50);
    char *izhod = malloc(50);
    int stBajtov;

    scanf("%s %d %s", vhod, &stBajtov, izhod);

    FILE *inp = fopen(vhod, "r");
    FILE *out;
    out = fopen(izhod, "w");
    char c = fgetc(inp);
    
    for(int i = 0; i < stBajtov; i++)
    {
        if (c >= 16)
        {
            fprintf(out,"%x\n",  c);
        }else {
            fprintf(out,"0%x\n",  c);
        }
        
       
        c = fgetc(inp);
    }

    fclose(inp);

    return 0;
}
