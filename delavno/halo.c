#include <stdio.h>  //OwOwOwOwOwOwOwOwOw
#include <stdlib.h> //OwOwOwOwOwOwOwOwO
#include <string.h> //OwOwOwOwOwOwOwOwO
char r(char *n, int z, int k)
{
    if (k - z == 1)
        return n[z];
    int l = z + 1, c = 0, p = 1;
    while (l <
           k)
    {
        switch (n[l++])
        {
        case 'T':
        case 'F':
            c++;
            break;
        case '&':
        case '|':
            p++;
            break;
        case '!':
            break;
        }
        if (c == p)
            break;
    }
    switch (n[z])
    { //
    case '&':
        return (r(n, z + 1, l) == 'T' && r(n, l,
                                           k) == 'T')
                   ? 'T'
                   : 'F';
    case '|':
        return (r(n, z + 1, l) == 'T' || r(n, l, k) == 'T') ? 'T' : 'F';
    case '!':
        return (r(n, z + 1, k) == 'F') ? 'T' : 'F'; //
    default:
        return 'X';
    }
}
int main()
{
    char *i =
        malloc(sizeof(char) * 1001);
    scanf("%s", i);
    putc(r(i, 0, strlen(i)), stdout);
} //OwO