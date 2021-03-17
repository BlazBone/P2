#include <stdio.h>
#include <string.h>

int main()
{

    char *string = "this is what i wasnt to do\n";

    printf("%s", string);

    printf("the string above is %zu characters long\n", strlen(string));
}