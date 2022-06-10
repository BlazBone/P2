#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    char *a;
    a = malloc(1001);
    scanf("%d%s", &n, a);

    int baza = 'a' - 'A';
    int i = 0;
    while (a[i + 1] != '\0')
    {
        if (i == 0)
        {
            if (a[i] <= 'z' && a[i] >= 'a')
            {
                a[i] = a[i] - baza;
            }
        }

        if (a[i+1] != '_' && a[i]=='_' )
        {
            if (a[i+1] <= 'z' && a[i+1] >= 'a')
            {
                a[i+1] = a[i+1] - baza;
            }
        }
        i++;
    }
        printf("%s", a);
    return 0;
}
