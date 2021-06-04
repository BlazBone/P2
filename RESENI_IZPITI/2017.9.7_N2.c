#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *array = malloc(1002 * sizeof(int));
    int stevec = 0;

    while ((scanf("%1d", &array[stevec])) != EOF) {
        stevec++;
    }

    int *rezultat = malloc(1002 * sizeof(int));
    int k = array[stevec - 1];
    int temp = 0;
    int stevka = 0;

    for (int i = 0; i < stevec - 1; i++) {
        temp = temp * 10 + array[i]; // pristejemo prejsni ostanek ce je oziroma vszame dve stevilki zdej
        stevka = temp / k;
        rezultat[i] = stevka;
        temp = temp - stevka * k; // Poracunamo ali je kej ostanka
    }

    char zacNic = 0;
    for (int i = 0; i <= (stevec - 2); i++) {
        if (rezultat[i] == 0 && i == 0)
            zacNic = 1;
        else if (rezultat[i] != 0)
            zacNic = 0;
        if (!zacNic)
            printf("%d", rezultat[i]);
    }
    printf("\n");

    return 0;
}

/* 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char intToChar(int n)
{
    return n + '0';
}

char charToInt(char c)
{
    return c - '0';
}

char* division(char* number, int divisor) 
{
    int numberLenght = strlen(number);
    char* answer = (char*) calloc(numberLenght, sizeof(char));
    char* answerPos = answer;

    int buff = 0;
    for (char* digit = number; *digit != 0; ++digit)
    {
        buff = buff * 10 + charToInt(*digit);

        if (buff >= divisor)
        {
            int div = buff / divisor;
            buff = buff % divisor;
            *answerPos = intToChar(div);
            ++answerPos;
        }
        else if (buff == 0)
        {
            *answerPos = '0';
            ++answerPos;
        }
    }
    return answer;
} 

int main() 
{ 
    char* n = (char*) calloc(1000000, sizeof(char));
    scanf("%s", n);
    int k;
    scanf("%d", &k);
    printf("%s\n", division(n, k));
    // printf(" 100 / 2 = %s\n", division("100", 2));
    // printf(" 100 / 3 = %s\n", division("100", 3));
    // printf(" 100 / 5 = %s\n", division("100", 5));
    // printf("1234 / 5 = %s\n", division("1234", 5));

	return 0; 
}  */

/* 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* division(char* number, int divisor) 
{ 
    char* answer = calloc(strlen(number), sizeof(char));

    // prefix of number that is larger than divisor
    int i = 0;
    int prefix = number[i] - '0';
    
    while (prefix < divisor)
    {
        i++;
        prefix = prefix * 10 + (number[i] - '0');
    }
    
    while (strlen(number) > i)
    {
        i++;
        // store result
       // strcat(answer, ((prefix / divisor) + '0'));
        printf("%d ", (prefix / divisor));
        
        // take next digit of number
        prefix = (prefix % divisor) * 10 + (number[i] - '0');
    }

    // if divisor is greater than number
    if (strlen(answer) == 0)
        return "0";

    return answer;
} 

int main() 
{ 
    printf("%s\n", division("100", 5));
    printf("Da.\n");

	return 0; 
}  */