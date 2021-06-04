
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "naloga2.h"

Vozlisce *obrni(Vozlisce *zacetek)
{
    struct Vozlisce *prev = NULL;
    struct Vozlisce *current = zacetek;
    struct Vozlisce *next = NULL;

    while (current != NULL) {
        // Store next
        next = current->naslednje;
        // Reverse current node's pointer
        current->naslednje = prev;
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }

    return prev;
}

int main()
{
    // koda za ro"cno testiranje (dopolnite po "zelji/potrebi)
    return 0;
}
