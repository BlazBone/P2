#include <stdio.h>
#include <stdlib.h>

int binary(int *array, int theNumber, int upper, int lowwer)
{
    
    int guess = array[(upper + lowwer)/2];
    printf("toomuch %d %d %d %d\n", upper, lowwer, guess, (upper + lowwer)/2);
    if(guess == theNumber){
        return 1;
    }else if(lowwer > upper){
        return 0;
    }else if (guess < theNumber){
        binary(array, theNumber, upper, (upper + lowwer)/2 + 1 );
    }else if(guess > theNumber){
        binary(array, theNumber, (upper + lowwer)/2 - 1, upper);
    }

}

int fillArray(int *array, int stevilo, int index)
{
  if (index == stevilo) 
  {
      return 0;
  }else {
      scanf("%d", &array[index]);
      fillArray(array, stevilo, ++index);
  }
  
}


int main(void)
{
    int stevilo;
    int iscemo;
    scanf("%d %d", &stevilo, &iscemo);
    int *array;
    array = calloc(sizeof(int), stevilo);

    fillArray(array, stevilo, 0);

    int found = binary(array, iscemo, stevilo, 0);

    if(found){
        printf("The number was found\n");
    }else {
        printf("The number was not found\n");
    }
    return 0;
}