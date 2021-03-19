#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int dolzinaZaporedja;
    scanf("%d",&dolzinaZaporedja);

    int *b;
    b = calloc(sizeof(int), dolzinaZaporedja);

    for (int i = 0; i < dolzinaZaporedja ; i++)
    {
        scanf("%d", &b[i]);
    }
    
    int *a;
    a = calloc(sizeof(int), dolzinaZaporedja);
    for (int i = 0; i < dolzinaZaporedja ; i++)
    {
        scanf("%d", &a[i]);
    }

    int counter = 0;
    int zadnja = 0;
    int i = 0;
    for (int j = 0; j < dolzinaZaporedja; j++)
    {
        int indeks = (j + i) % dolzinaZaporedja;
        if (a[j] != b[indeks])
        {
            i++;
            j = 0;
            counter = 0;
            zadnja = i;
        }else {
            counter++;
        }
        if (counter == dolzinaZaporedja)
        {
            break;
        }
    }   
    printf("%d\n",zadnja);
    return 0;
}

