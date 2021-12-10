#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX(a,b) (a)>(b)?(a):(b)
//svota(a,b,c)


int stAgrumentov (char *racun, int bilanca)
{
    //f(a,d,h(a,s,d,f,g))
    int stevilo = 1;
    for (int i = 0; i < strlen(racun); i++)
    {
        if (racun[i]=='(')
        {
            //stevilo = MAX(stAgrumentov(racun+1, 1), stevilo);
            bilanca++;
        }else if(racun[i]==')'){
            bilanca--;
        }else if(racun[i] == ',' && bilanca == 1){
            stevilo++;
        }
    }
    
    return stevilo;
    printf("\nstevilo=%d\n",stevilo);
    
}

int halo(char *racun, int bilanca)
{
    int ena = 0;
    while (*racun != '\0')
    {
        if (*racun=='(' && *(racun+1)!=')')
        {
            ena = MAX(stAgrumentov(racun,0), ena);
        }
        racun++;
    }
    return ena;

}



int main(int argc, char const *argv[])
{
    
    char *racun;
    racun = malloc(1001*sizeof(char));
    scanf("%s",racun);

    printf("%d\n",halo(racun, 0));

    return 0;
}
