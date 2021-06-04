#include <stdio.h>
#include "lists.h"

/*
extern int num_nodes;
void lists(); //s tem se stvar prevede
*/

// #ifdef (ali je makro definiran)
// #ifndef (ali makro ni definiran (samo obrnjen pogoj))
// #if (ali ima makro razlicno vrednost od 0)


int main(int argc, char const *argv[])
{
    printf("Hello world.\n");  
    lists();  
#ifdef TEST
        printf("prg: %d\n", num_nodes);
#else
    printf("Done.\n");
#endif
    return 0;
}


//  gcc -c prg.c        #SAMO PREVAJANJE
//  gcc -o prg prg.o    #SAMO POVEZOVANJE