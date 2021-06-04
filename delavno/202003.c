#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct _Vozlisce
    {
        int podatek;
        struct _Vozlisce *naslednje;
    } Vozlisce;

Vozlisce* izloci(Vozlisce* zac, Vozlisce* v){
    Vozlisce *oddaj;
    oddaj = malloc(sizeof(Vozlisce*));
    if (zac == v)
    {
        return v->naslednje;
    }else {
        oddaj = zac;
    }

    while (zac->naslednje != v && zac->naslednje != NULL)
    {
        zac = zac->naslednje;
    }
    zac->naslednje = v->naslednje;
    v->naslednje = NULL; //ni treba ampak tako ga izkljucimo

    





    return oddaj;
}

Vozlisce* prepisi(int* t)
{
    if (t[0] == 0)
    {
        return NULL;
    }
    
    Vozlisce *zacetek;
    zacetek = malloc(sizeof(Vozlisce));
    zacetek->podatek = t[0];
    Vozlisce *vmesno; 
    Vozlisce *test;
    vmesno = malloc(sizeof(Vozlisce));
    zacetek->naslednje = vmesno;
    int i = 1;
    while (t[i] != 0)
    {
        
        
        test = malloc(sizeof(Vozlisce));
        vmesno->podatek = t[i];
        vmesno->naslednje = test;
        vmesno = test;
        i++;
    }
    vmesno->naslednje = NULL;
    test->naslednje = NULL;


    return zacetek;
}


Vozlisce* prepisiREK(int* t)
{   
    Vozlisce *novo;
    if (*t == 0)
    {
        return NULL;
    }else 
    {
        novo = malloc(sizeof(Vozlisce));
        novo->podatek = *t;
        novo->naslednje = prepisiREK(t+1);
    }
    return novo;
}

void natisni (Vozlisce *a)
{
    while (a != NULL)
    {
        printf("%d\n", a->podatek);
        a = a->naslednje;
    }
}

int main(int argc, char const *argv[])
{
    
    
    
    Vozlisce *a;
    
    Vozlisce *b;
    Vozlisce *c;
    Vozlisce *d;
    a = malloc(sizeof(Vozlisce));
    b = malloc(sizeof(Vozlisce));
    c = malloc(sizeof(Vozlisce));
    d = malloc(sizeof(Vozlisce));

    a->podatek = 1;
    a->naslednje = b;
    
    b->podatek = 2;
    b->naslednje = c;
    
    c->podatek = 3;
    c->naslednje = NULL;
    
    natisni(a);
    
    Vozlisce *kzac  = izloci(a, d);

    natisni(kzac);
    printf("here\n\n\n");
    int t[] = {9,8,7,6,5,4,3,2,1,0};
    
    Vozlisce *ahahah =  prepisiREK(t);

    natisni(ahahah);

    Vozlisce *ok =  prepisi(t);

    natisni(ok);

    return 0;
}
