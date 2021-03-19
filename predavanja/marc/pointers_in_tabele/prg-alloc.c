#include <stdio.h>
#include <stdlib.h>

int a[100]; //med staticnimi


int main(void)
{
    int b[100]; //na skladu
    static int c[100]; //med staticnimi

    printf("&a=%p\n", a);
    printf("&b=%p\n", b);
    printf("&c=%p\n", c);
    //a in c sta priblizno skupi

    int *d; // kazalec d je shranjen na skladu
    d = (int*)malloc(100 * sizeof(int));    //maloc sprejme en argument stevilo baytov ki jih od njega zahtevam, vrne pa mi kazalec na prvega od teh bajtov
                                            //ker malloc vrnme samo kazalec void ga castamo v tip kazalca na int
                                            //d kaze nekam na kopico kjer ima 100*size of int prostora za podatkov
                                            //d pa je na skladu
                                            //100 intov na katere kaze d, je na kopici
    //preden zacnemo n uporabljat lahko preverimo ce je d null
    //malloc lahklo vrne null ce je slo kej narove slucajno


    if (d == NULL)
    {
        printf("error\n");
        exit(1); //s tem zakljucimo program takoj in 1 pomeni da je napaka 0 pomeni d je kulci
    }
    
    for (int i = 0; i < 100; i++)
    {
        printf("%d ", d[i]);
    }
    d[50] = 42069; // artificially sm spremenu
    free(d);
    printf("\n");

    int *e;
    e = (int*)malloc(100 * sizeof(int));
    // e lahko kaze tam kmr je prej d tako da ni mus d bojo same 0... lahko dobimo pa drug kos pomnilnika 

    if (e == NULL)
    {
        printf("error\n");
        exit(1); //s tem zakljucimo program takoj in 1 pomeni da je napaka 0 pomeni d je kulci
    }
    
    for (int i = 0; i < 100; i++)
    {
        printf("%d ", e[i]);
    }
    free(e);
    printf("\n");




    //funckija calloc() zahteva koliko podatkov in kaksne velikost
    int n;
    scanf("%d", &n);
      int *j;
    j = (int*)calloc(n, sizeof(int));
    //tle pa so fix same nule
    //hrani podatke se zmiri na kopici
   
    
    if (j == NULL)
    {
        printf("error\n");
        exit(1); //s tem zakljucimo program takoj in 1 pomeni da je napaka 0 pomeni d je kulci
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", j[i]);
    }
    printf("\n");
    free(j);
    //uporabiti j ko ga sprostimo je zelo nevarno
    //kos pomnilinka na katerega kaze j ni vec moja last ke ga sprostim, zato lahko c kej napise gor kar j sne vem 
    for (int i = 0; i < n; i++)
    {
        printf("%d ", j[i]);
    }
    printf("\n");


    //sklad ma relativno malo prostora medtem k ma staticne prostor je dost velik
    /*
    * 
    * 
    */

    return 0;
}