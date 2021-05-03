#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct _person
{
    char name[100];
    int age;
};

typedef struct _person person;
//to nam omogoci da namesto
//struct _person p1 = {"Janez", 20};
// pisemo
//person p1 = {"Janez", 20};

void print_person(struct _person p)
{
    p.age += 10; //se spremeni samo tuki v funkciji ampak org vresnodt se ni spremenila
    printf("{ %s  %d }\n", p.name, p.age);
}

void print_ptr_person(struct _person *p)
{
    p->age += 10; //se spremeni pousod ker kazemo tocno na naslov
    printf("{ %s  %d }\n", p->name, p->age);
}

int main(void)
{
    struct _person p1 = {"Janez", 20};
    struct _person p2 = {"Marko", 21};
    struct _person *p;
    struct _person *p3;

    p3 = (struct _person *)malloc(sizeof(struct _person));
    strcpy(p3->name, "Blaz");
    p3->age = 20;

    printf("%lu\n", sizeof(struct _person));
    printf("%lu\n", sizeof(struct _person *));

    printf("[%s] %d\n", p1.name, p1.age);
    printf("[%s] %d\n", p2.name, p2.age);

    p = &p1;
    //lahko na 2 nacina (*p).name je ekvivalnetno p->name
    //prvi
    printf("[%s] %d\n", (*p).name, (*p).age);
    p = &p2;
    //drugi
    printf("[%s] %d\n", p->name, p->age);

    printf("[%s] %d\n", p3->name, p3->age);

    p1 = *p3;
    //memcpy(&p1, p3, sizeof(struct person)); // je GRDO lepse je v vrstici nad tem

    p1 = *p3;

    print_person(p1);
    print_person(*p3);

    free(p3);
}