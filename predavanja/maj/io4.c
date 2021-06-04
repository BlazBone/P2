#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

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
            fprintf(stderr,"prislo je do napake inp!\n");
            return 1;
        }
    }
    

   if(strcmp(argv[2], "-") == 0){
       out = stdout;
   }else {

       out = fopen(argv[2], "w");
        if (out == NULL)
        {
            fprintf(stderr,"prislo je do napake inp!\n");
            return 1;
        }
   }
    

    int c = 0;
    while ((c = fgetc(inp)) != EOF)
    {
        if (('0' <= c) && ('9' >= c))
        {
            fputc(c, out);
            //fflush(out);
            printf("=> %c\n", c);
        }
        
    }
    
   
    



    fclose(inp); //zapremo datotteko in povemo da je nebomo rabili vec
    fclose(out);



    //exit(0); //zapre program in use shrani.. insto kot return

    //_exit(0); // kr zapre program nc ne shrani 

    return 0;
}


