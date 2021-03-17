#include <stdio.h>
#include <stdlib.h>


int main() {

    char grade = 'D';

    switch(grade) {

        case 'A' : 
            printf("You did great.\n");
            break;
        
        case 'B' : 
            printf("You did alright.\n");
            break;
        case 'C' : 
            printf("You did meh.\n");
            break;
        case 'D' : 
            printf("clutch.\n");
            break;
        case 'F' : 
            printf("You failed.\n");
            break;
      
        default :
            printf("Invalid input \n");

    }

    return 0;
    
}