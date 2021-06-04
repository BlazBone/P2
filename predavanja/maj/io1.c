#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *f; //f je kazalec na tip FILE ta tip opisuje datoteko in hrani use podatke ki so potrebni za dostop do fizicne datoteke na disku
            //



    if(argc < 3) return 1;

    FILE *inp;
    FILE *out;


    if (strcmp(argv[1], "-") == 0)
    {
        inp = stdin;
    }else {
        inp = fopen(argv[1],"r"); //datoteko odpremo -pripravimo za uporabo znotraj prgrama
        if (inp == NULL)
        {
            printf("prislo je do napake inp!\n");
            return 1;
        }
    }
    

   if(strcmp(argv[2], "-") == 0){
       out = stdout;
   }else {

       out = fopen(argv[2], "w");
        if (out == NULL)
        {
            printf("prislo je do napake out!\n");
            return 1;
        }
   }
    
    

    int ch;
    do
    {
        ch = fgetc(inp);
        if(ch != EOF) fputc(ch, out);
    } while (ch != EOF);
    

   
    //branje in pisanje datoteke




    fclose(inp); //zapremo datotteko in povemo da je nebomo rabili vec
    fclose(out);
        
    return 0;
}


