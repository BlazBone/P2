#include <stdio.h>
#include <stdlib.h>

struct _klub{
    char ime[21];
    char **igralci;
}; 
typedef struct _klub Klub;

Klub* izdelja()
{
    Klub *klub;
    klub = malloc(sizeof(Klub));

    char *temp;
    temp = malloc(sizeof(char)*25);
    int stClanov;
    scanf("%s%d",klub->ime, &stClanov);
    char *igralci[stClanov];
    
    for (int i = 0; i < stClanov; i++)
    {
        igralci[i] = malloc(20);
        scanf("%s",igralci[i]);
    }
    
    klub->igralci = igralci;

    return klub;

}


int main(int argc, char const *argv[])
{
     izdelja();
    return 0;
}
