#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[20];
    char major[50];
    int age;
    double gpa;
};



int main() {
    
    struct Student Jaka;
    
    Jaka.age = 22;
    Jaka.gpa = 3.6;
    strcpy(Jaka.name, "Jaka");
    strcpy(Jaka.major, "biznisman");

    printf("%d, %s, %f",Jaka.age, Jaka.name, Jaka.gpa);

   
    
    return 0;
}