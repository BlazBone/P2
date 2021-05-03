#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person1{
  char name[100];
  int age;
};

struct person2{
  char name[100];
  int height;
  int age;
};

void print_person(struct person1 p)
{
    p.age += 10; //se spremeni samo tuki v funkciji ampak org vresnodt se ni spremenila
    printf("{ %s  %d }\n", p.name, p.age);

}

void print_ptr_person(struct person1 *p)
{
    p->age += 10; //se spremeni pousod ker kazemo tocno na naslov
    printf("{ %s  %d }\n", p->name, p->age);

}



int main(void)
{
  struct person1 p1 = {"Janez", 20};
  struct person2 p2 = {"Marko", 180, 21};


  print_ptr_person(&p1);
  print_ptr_person((struct person1*)(&p2));

  return 0;

}