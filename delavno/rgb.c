#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char *vhod, *izhod;
    int stByte;
    vhod = malloc(100); izhod = malloc(100);

    scanf("%s%d%s",vhod, &stByte, izhod);
    FILE *in, *out;
    in = fopen(vhod, "rb");
    out = fopen(izhod, "w");
    unsigned char r,g,b;
    int ena,dva,tri;
    ena = 0;
    dva = 0;
    tri = 0;

    //binary fgetc()--1bajt na enkrt
    // fread(char *in, sizeof(char), n*3, input);
    //20 -> 0001 0100
    //fwrite(char *c, sizeof(char), 1, out); //20 -> 0001 0100
    //fprintf(out, "%d", 20); 0011 0010(ascii 2)   0011 0000 // 20

    for (int i = 0; i < stByte; i++)
    {
        r = getc(in); //0000 0000               0000000000000000000000000000000000000000000
        g = getc(in);
        b = getc(in);

        if (r>0 && g==0 && b==0)
        {
            printf("ena %d %d %d\n", r,g,b);
            ena++;
        }
        if (r==0 && g>0 && b==0)
        {
            printf("dva %d %d %d\n", r,g,b);
            dva++;
        }
        if (r==0 && g==0 && b>0)
        {
            printf("tri %d %d %d\n", r,g,b);
            tri++;
        }
        
    }
    
    fprintf(out,"%d\n%d\n%d",ena,dva,tri);
    fclose(in);fclose(out);
    free(vhod); free(izhod);


    return 0;
}
