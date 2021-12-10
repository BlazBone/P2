#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *f;
    f = fopen("vhod06.bin", "wb");

    unsigned char a[] = {0,95,0,0,0,0,66,10,0,0,0,60,0,37,0,0,205,208,0,5,0};
    
    
    
    fwrite(&a[0],sizeof(char), 21,f);
    
    

    fclose(f);

    return 0;
}