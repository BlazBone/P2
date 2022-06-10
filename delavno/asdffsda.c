#include <stdio.h>

void blabla(FILE *in, FILE *out)
{
    int prvi =fgetc(in);
    fputc(prvi,out);
    int drugi;
    while ((drugi = fgetc(in))!=EOF)
    {
        if ((drugi >= 'A' && drugi <= 'Z') || (drugi >= 'a' && drugi <= 'z'))
        {
            if (prvi != drugi)
            {
                fputc(drugi, out);
            }   
        }else{
            fputc(drugi, out);
        }
        prvi = drugi;
    }

}

int main(int argc, char const *argv[])
{
    FILE *in, *out;
printf("hej");
    in = fopen("dupllo.txt", "r");
    out = fopen("dupploizhod.txt", "w");

   blabla(in, out);
    return 0;
}
