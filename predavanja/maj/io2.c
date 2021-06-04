#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(int argc, char const *argv[])
{
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
        
    while (1)
    {
        int i;
        int res = fscanf(inp, "%d", &i);
        if(errno != 0){
            fprintf(stderr, "wrror: errno!\n");
        }
        if (res == EOF)
        {
            break;
        }
        if(res == 0){
            fprintf(stderr, "ERROR: read!\n");
            break;
        }
        fprintf(out,"READ: %d\n", i);
    }
        
    fclose(inp);
    fclose(out);


    return 0;
}
