
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

#include "naloga.h"

int vsotaI(Vozlisce* zacetek) {
    int vsota = 0;
    if (zacetek == NULL) return 0;
    while (zacetek != NULL)
    {
        vsota += zacetek->podatek;
        zacetek = zacetek->naslednje;
    }
    return vsota;
}

int vsotaR(Vozlisce* zacetek) {
    if(zacetek == NULL) return 0;
    return vsotaI(zacetek->naslednje) + zacetek->podatek;
   
}

Vozlisce* vstaviUrejenoI(Vozlisce* zacetek, int element) {
    Vozlisce* novo = malloc(sizeof(Vozlisce));
    if (zacetek == NULL)
    {
        novo->naslednje = NULL;
        novo->podatek = element;
        return novo;
    }

    if (zacetek->podatek > element)
    {
        novo->naslednje = zacetek;
        novo->podatek = element;
        return novo; 
    }

    Vozlisce *pred = malloc(sizeof(Vozlisce));
    Vozlisce *po = malloc(sizeof(Vozlisce));
    pred = zacetek;
    po = zacetek->naslednje;
    if (po == NULL)
    {
        zacetek->naslednje = novo;
        novo->podatek =element;
        novo->naslednje = NULL;  
        return zacetek; 
    }
    
    while (po != NULL && po->podatek < element)
    {
        pred = po;
        po = po->naslednje;
    }
    novo->podatek = element;
    novo ->naslednje = po;
    pred->naslednje = novo;

    return zacetek;
}

Vozlisce* vstaviUrejenoR2(Vozlisce* zacetek, int element) {
    if(zacetek == NULL)
    {
        Vozlisce* novo = malloc(sizeof(Vozlisce));
        novo->naslednje = NULL;
        novo->podatek = element;
        return novo;
    }
    
    if(zacetek->naslednje != NULL) {
        vstaviUrejenoR2(zacetek->naslednje, element);
    }

    if (zacetek->naslednje == NULL)
    {
         if(zacetek->podatek < element){
              Vozlisce* novo = malloc(sizeof(Vozlisce));
            novo->naslednje = NULL;
            novo->podatek = element;
            zacetek->naslednje = novo;
         }
    }else {
        if(zacetek->podatek < element && zacetek->naslednje->podatek >= element){
        Vozlisce* novo = malloc(sizeof(Vozlisce));
        novo->naslednje = zacetek->naslednje;
        novo->podatek = element;
        zacetek->naslednje = novo;
    }
    }
    

   
    if (zacetek->podatek >= element)
    {
         Vozlisce* novo2 = malloc(sizeof(Vozlisce));
         novo2->naslednje = zacetek;
         novo2->podatek = element;
         zacetek = novo2;
    }
    

    return zacetek;
}


int main() {
       return 0;
}

Vozlisce* vstaviUrejenoR(Vozlisce* zacetek, int element)
 {  
     if(zacetek == NULL || element <=zacetek->podatek){
         Vozlisce *novo = malloc(sizeof(Vozlisce));
         novo->podatek = element;
         novo->naslednje = zacetek;
         return novo;
     }

    // vstavljanje na nezacetno pozicijo
    //element vstavimo v rep
    //funkcija nam vrne kazalec na zacetek obogatenega repa
    //za naslednika zacetnega vozlisca dolocimo kazalec na zacetek obogatenega repa
    zacetek->naslednje = vstaviUrejenoR(zacetek->naslednje, element);
    return zacetek;

 }