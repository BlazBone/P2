
/*
 * Va"sa re"sitev tretje naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 3 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int parkomat(int n, int k) {
    int unikatni = 0;
    if (n == 0 && k >= 0)
    {
        return 1;
    }
    if (k < 0)
    {
        return 0;
    }
    

    unikatni += parkomat(n-1,k-1);
    unikatni += parkomat(n-1,k+1);
    return unikatni;
    
}

int main() {
    // int array[2] = {1,7};
    // printf("%d %d", *array, *(array+1));
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d\n", parkomat(n,k));
    return 0;
}
