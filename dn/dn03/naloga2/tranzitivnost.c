/*

Prevajanje in poganjanje:

gcc -o test01 test01.c tranzitivnost.c -lm
./test01

*/
#include <stdio.h>
#include <stdbool.h>

#include "tranzitivnost.h"

int tranzitivnost(int a, int b) {
    bool tranzitivna = true;
    bool antitranzitivna = true;
    bool netranzitivna = false;

    int m = 0;
    int n = 0;
    int k = 0;
    for (int x = a; x <= b; x++)
    {
        for (int y = x; y <= b ; y++){
            //printf("%d %d\n", x, y);
            if (f(x, y))
            {
                m = x;
                n = y;
                k = -1;
                for (int z = 0; z < b; z++)
                {
                    //printf("    %d %d %d\n", x, y, z);
                    if (f(n, z))
                    {
                        k = z;
                        //printf("%d %d %d\n", m, n, k);
                        bool vrednostXZ = f(m,k);
                        
                        if (!vrednostXZ)
                        {
                            //printf("helo");
                            tranzitivna = false;
                            netranzitivna = true;
                        }
                        if (vrednostXZ)
                        {
                            antitranzitivna = false;
                        }
                    }
                }

                
                
            }else if(f(y,x)){
                m = y;
                n = x;
                k = -1;
                for (int z = 0; z < b; z++)
                {
                    if (f(n, z))
                    {
                        k = z;
                        //printf("    %d %d %d\n", m, n, k);
                        bool vrednostXZ = f(m,k);
                        
                        if (!vrednostXZ)
                        {
                            //printf("helo");
                            tranzitivna = false;
                            netranzitivna = true;
                        }
                        if (vrednostXZ)
                        {
                            antitranzitivna = false;
                        }

                    }
                    
                    
                }

                
            }
            
           
            //printf("    %d %d\n", x, y);
           // printf("vrednost funkcije %d\n", f(x, y));
        }
        
    }

    if (tranzitivna && antitranzitivna)
    {
        //printf("TRANSITIVNA & ANTITRANSITIVNA\n");
        return 1;
    }else if (tranzitivna)
    {
        //printf("TRANSITIVNA\n");
        return 2;
    }else if (antitranzitivna)
    {
        //printf("ANTITRANSITIVNA\n");
        return 3;
    }else if (netranzitivna)
    {
        //printf("NETRANZITIVNA\n");
        return 4;
    }
    
    
    


    return -1;
}


// Ta datoteka NE SME vsebovati funkcij main in f!
// Funkciji main in f sta definirani v datoteki test01.c.
