#include <stdlib.h>
#include <stdio.h>


int main() 
{
    int age = 30;
    int * pAge = &age;
  


    printf("age: %d\n", *pAge);



    return 0;
}