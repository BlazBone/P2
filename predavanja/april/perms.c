#include <stdio.h>


void perms(int *elems, int num_elems, int i)
{

    if (i == num_elems )
    {
        for (int i = 0; i < num_elems; i++)
        {
            printf("%d ", elems[i]);
        }
        printf("\n");
        return;
        
    }
    
    for (int j = i; j < num_elems ; j++)
    {
       
        int temp;
        temp = elems[i];
        elems[i] = elems[j];
        elems[j] = temp;
        perms(elems, num_elems, i + 1);
        temp = elems[i];
        elems[i] = elems[j];
        elems[j] = temp;
    }

}





int main(void)
{

    static int elems[100];
    int num_elems = 4;

    for(int i = 0; i < num_elems; i++){
        elems[i] = i + 1;
    }

    perms(elems, num_elems, 0);

    return 0;
}
