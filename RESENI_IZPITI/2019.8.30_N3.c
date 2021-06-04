#include <stdio.h>
#include <stdlib.h>
char MEMO[1000];

void skakac(int steviloPloscic, int skok1, int skok2, int steviloSkokev, int indexSkokov, int polozaj)
{
    if (indexSkokov > steviloSkokev || polozaj < 0 || polozaj > steviloPloscic) {
        return;
    }
    if (MEMO[polozaj] == 0) {
        MEMO[polozaj] = 1;
    }

    skakac(steviloPloscic, skok1, skok2, steviloSkokev, indexSkokov + 1, polozaj + skok1);
    skakac(steviloPloscic, skok1, skok2, steviloSkokev, indexSkokov + 1, polozaj - skok1);
    skakac(steviloPloscic, skok1, skok2, steviloSkokev, indexSkokov + 1, polozaj + skok2);
    skakac(steviloPloscic, skok1, skok2, steviloSkokev, indexSkokov + 1, polozaj - skok2);

    return;
}

int main()
{
    int steviloPloscic, skok1, skok2, steviloSkokev;
    scanf("%d%d%d%d", &steviloPloscic, &skok1, &skok2, &steviloSkokev);
    skakac(steviloPloscic, skok1, skok2, steviloSkokev, 0, 0);
    int unikatni = 0;
    for (int i = 0; i < steviloPloscic; i++) {
        unikatni += MEMO[i];
        /* if (MEMO[i] != 0)
        {
            printf("%d\n", i);
        } */
        
        
    }

    printf("%d\n", unikatni);

    return 0;
}