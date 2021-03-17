#include <stdio.h>


int i1, i2, i3;
//naslovi teh trehs so zaporedni razlikujejo za 4 byte
char c1, c2, c3;
//te se razlikujejo za en bayt
double d1, d2, d3;
//te se razlikujejo za 8 baytov
//incicializacija dobijo svoj naslov na pomnbilniku so staticne

//ker so te spremenljivke staticne se hranijona static data


//vsakic ko pozenemo program je druglje spravljena spremenljivka pac na drug naslov to malo spreminja da slucajno ne pride do kaksnih napadov
//da se nebi vedno na isto mesto shranili
int main(void)
{
    printf("int     : %p %p %p\n",&i1, &i2, &i3);
    printf("double  : %p %p %p\n", &d1, &d2, &d3);
    printf("char    : %p %p %p\n", &c1, &c2, &c3);
    //printa pointereje oz kazalce dollocneih spremensljivk
    //ubistvu printa naslove kje so spremenljicke shranjene na pomnilniku
    // pointer pove kje na pomnilniku je shranjena ta sprememnljivka

    //ta spremenljivka ni staticna zato je na stacku
    int *pi; // int *pi je tipa pointer na int.... ni int ni navaden pointer je pointer na int
             // tip te spremenljivke je int* to pa pomeni da je tipa KAYALEC NA INT ta ne vsebuje vrednosti int ampak vsebuje naslov kjer je dolocen int
    pi = &i2;//p1 ki je pointer na int mu dodelimo vrednost &i2 kar je addres od i2 ali naslov i2
             //tako spremenljivke pi ki je tipa int* vsebuje kazalec na naslov spremenljivke i2

    printf("i2 : %p\n", pi);

    i2 = 5; printf("i2=%d\n", i2);
    *pi = 7; //ce damo zvezdico pred ppointer potem dostopamo do spremenljivke tako s to komando spremenimo i2
            //ekvivalentno i2 = 7;
    printf("i2=%d\n", *pi); //lahko napisemo i2 ali *pi


    printf("pi: %p\n", &pi); //tudi sam pointer ima naslov sam je tudi spremenljivka


    return 0;
}

