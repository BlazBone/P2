#include <stdio.h>
#include <stdlib.h>

double vsota(double a, double b) {
    return a + b;
}

double razlika(double a, double b) {
    return a - b;
}
double produkt(double a, double b) {
    return a * b;
}
double deljenje(double a, double b) {
    return a/b;
}

int main() {

    double num1;
    double num2;
    char operator;
    printf("Enter the first number: ");

    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Enter an operator: ");
    scanf(" %c", &operator);

    double anwser;
    if(operator == '+'){
        anwser = vsota(num1, num2);
    }else if(operator == '-'){
        anwser = razlika(num1, num2);
    } else if(operator == '/'){
        anwser = deljenje(num1, num2);
    } else if(operator == '*'){
        anwser = produkt(num1, num2);
    } else {
        printf("invalid operator\n");
    }


    printf("Anwser is %.3f\n", anwser);
    
    return 0;
}