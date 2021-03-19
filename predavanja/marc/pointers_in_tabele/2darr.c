#include <stdio.h>
#include <stdlib.h>

int f[3][2]; // v eni dimenziji 3 elemente v drugi 2 elementa

//lahko tudi inicializiramo 
int a[3][2] = {
            {0,1},
            {2,3},
            {4,5} };

//en nacin kaj pa ce zelimo 2d tabelo katerekoli velkosti
int sum(int b[3][2])
{
    int s = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            s += b[i][j];
        }
        
    }
    return s;
}

int sum2(int b[][2], int stVrstic)
{
    int s = 0;
    for (int i = 0; i < stVrstic; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            s += b[i][j];
        }
        
    }
    return s;
}

//to ne dela (sum3)
/*
    2darr.c:41:14: error: array type has incomplete element type ‘int[]’
    41 | int sum3(int b[][], int stVrstic, int stStolpcev)
        |              ^
    2darr.c:41:14: note: declaration of ‘b’ as multidimensional array must have bounds for all dimensions except the first
*/
/*
int sum3(int b[][], int stVrstic, int stStolpcev)
{
    int s = 0;
    for (int i = 0; i < stVrstic; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            s += b[i][j];
        }
        
    }
    return s;
}
*/

//dvojni pointer
// v tako funkcijo moramo poslati
int sum4(int **b, int stVrstic, int stStolpcev)
{
    int s = 0;
    for (int i = 0; i < stVrstic; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            s += b[i][j];
        }
        
    }
    return s;
}


int main(void)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    int *p = &(a[0][0]);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");
    
    printf("sum %d\n", sum(a));

    printf("sum2 %d\n", sum2(a, 3));

    int **b;
    int n = 3;
    int m = 2;
    int k = 1;
    //MALOC (beg)
    b = (int**)malloc(n * sizeof(int*)); //svetlo modra tabela na videotu oz tabela kazalcev na int

    for (int i = 0; i < n; i++)
    {
        b[i] = (int*)malloc(m * sizeof(int)); // temno modra tabela aka tabela z inti

        for (int j = 0; j < m; j++)
        {
            b[i][j] = k;
            k++;
        }
        
    }
    printf("sum4 nova tabela %d\n", sum4(b, n, m));
    //MALOC (end)

    //FREE (beg)
    for (int i = 0; i < n; i++)
    {
        free(b[i]); //najprej se sprehodimo po svetlomodri oz po tabeli kazalcev na int ter tako sporstimo tabele z inti
        b[i] = NULL; // to je optional da kazalci ne vec kazejo nikamer in majo null
    }
    
    free(b);//na koncu sporstimo svetlomodro aka tabela kazalcev na int
    //FREE (end)

    return 0;
}   