#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int elems[1000];

void kombinacije(int *elementi, int stElementov, int maksElement, int i)
{

    if (i == stElementov)
    {
        //vsa mesta so ze dolocena
        for (int j = 0; j < stElementov; j++)
        {
                printf("%d ",elementi[j]);
        }
        printf("\n");
        return;

    }else {

        for (int j = 1; j <= maksElement ; j++)
        {
            elementi[i] = j;
            kombinacije(elementi,stElementov,maksElement,i+1);
        }
        
    }
    

}


int main(int argc, char const *argv[])
{
    kombinacije(elems, 10, 5, 0);

    return 0;
}
