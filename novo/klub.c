#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _klub Klub;

Klub* izdelaj (char **agrv);


int main(int argc, char const *argv[])
{
    
    struct _klub{
        char imeKluba[21];
        int stClanov;
        char **imenaClanov;

    };

    izdelaj(argv);
    
    return 0;
}
Klub* izdelaj (char **agrv)
{
    
    struct _klub *club;
    club = malloc(sizeof(struct _klub));

    club->imek

}