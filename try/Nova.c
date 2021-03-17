#include <stdio.h>
#include <stdlib.h>



void oj(char ime[]) {
    printf("Hi %s\n", ime);
}

int cubingNumber(int a) {
    
    int b = a * a * a;
    return b;
}

double maxNum(double a, double b){
    if(a > b) return a;
    return b;

}

double maxNum3(double a, double b, double c){

    return maxNum(a,maxNum(b,c));

}

int main() {

    int luckyNumbers[] = {13, 7, 5, 27, 77, 15, 42};
    oj("jaja");
    int a;
    printf("Vnesite stevilo: ");
    scanf("%d", &a);
 
    printf("%d\n", cubingNumber(a));

    printf("%f\n", maxNum(13, 13.002));
    printf("%f\n", maxNum(4, 12));
    printf("%f\n", maxNum(13, 12));

    printf("%f\n", maxNum3(13, 25, 14));
    return 0;
}