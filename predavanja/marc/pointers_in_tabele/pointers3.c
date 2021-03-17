#include <stdio.h>

void f1(int n) //PRENOS PO VREDNOSTI
{
     printf("f1: n=%d @->%p\n",n, &n);
    n = 2 * n;
    printf("f1: n=%d @->%p\n",n, &n);
    printf("\n");

}

void f2(int n)
{
     printf("f2: n=%d @->%p\n",n, &n);
    n = 2 * n;
    printf("f2: n=%d @->%p\n",n, &n);
    printf("\n");

}
void f2kazalec(int *n) //PRENOS PO REFERENCI
{
    // n = 0x....45b3
    // na naslovu 0x....45b3 je shranjena vrednpst 4
    // *n == 4
     printf("f2kazalec: n=%p *n=%d @->%p\n", n,*n, &n);
    *n = 2 * *n;
    printf("f2kazalec: n=%p *n=%d @->%p\n", n, *n, &n);
    printf("\n");
}

int main(void)
{
    int n1 = 3;
    int n2 = 4;
    printf("n1 @->%p\n", &n1);
    printf("n2 @->%p\n", &n2);
    printf("n1=%d  n2=%d\n", n1, n2);
    f1(n1);
    f2(n2);
    printf("n1=%d  n2=%d\n", n1, n2); //imajo n1 in n2 se vedno iste vrednosti saj funckija vzame kopijo

    f2kazalec(&n2); //posljemo naslov spremembe ki se bodo zgoile bodo na naslovu 
    printf("n1=%d  n2=%d\n", n1, n2);



    

    return 0;
}
