/*
Mnozico stevil razdeli v 2 podmnozici tako, da je absolutna vrednost
razlike med vsoto stevil v prvi podmnozici in vsoto stevil v drugi podmnozici najmanjsa
mozna.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int min(int prvi, int drugi) 
{
    if (prvi < drugi)
        return prvi;
    else 
        return drugi;
} 

// minimum sum 
int findMinRec(int* array, int i, int currentSum, int sumTotal) 
{ 
    if (i == 0) {
        int absy1 = abs((sumTotal - currentSum) - currentSum);
        return absy1; 
    }
    // arr[i]: include, exclude
    int pristej = array[i - 1];
    int prvi = findMinRec(array, i - 1, currentSum + pristej, sumTotal);
    int drugi = findMinRec(array, i - 1, currentSum, sumTotal);
    
    int miny = min(prvi , drugi);
    return miny; 
}


  
int main() 
{
    int n, sumTotal = 0;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
        sumTotal += array[i];
    }
    
    printf("%d\n", findMinRec(array, n, 0, sumTotal));
    
    return 0;
}


