#include <stdlib.h>
#include <stdio.h>

int main()
{
    char line[255];

    FILE * fpointer = fopen("Input.txt", "r");

    for (int i = 0; i < 4; i++)
    {
        fgets(line, 255, fpointer);
        printf("%s", line);
    }
    

    
    

    fclose(fpointer);


    return 0;
}