#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    
    
    static unsigned char block[1024];
    int *iblock = ((int*)(&block[0]));

    int len = 0;
    while (1)
    {
        int n = fread(block, sizeof(unsigned char), 1024, inp);
        for (int i = 0; i < 256; i++)
        {
            printf("%d ", iblock[i]);

        }
        printf("\n");
        
        len += n;
        if (n < 1024)
        {
            break;
        }   
    }
    printf("LENGTH: %d\n", len);
   




    fclose(inp); //zapremo datotteko in povemo da je nebomo rabili vec
    fclose(out);
        
    return 0;
}


