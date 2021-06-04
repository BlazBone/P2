#include <stdio.h>
#include <stdlib.h>

int *tabela;

void natisni(int index){
    for (int i = 0; i < index; i++)
    {
        printf("%d ", tabela[i]);
    }
    printf("\n");
}

void sestej(int stevilo, int maxSumand, int index){
    if (maxSumand>stevilo )
    {
        maxSumand = stevilo;
    }
    

    if (stevilo == 0)
    {
        natisni(index);
        return;
    }else if(maxSumand == 0){
        return;
    }else{
        tabela[index] = maxSumand;
        sestej(stevilo - maxSumand, maxSumand, index +1);
        sestej(stevilo, maxSumand-1, index);

    }
    



}


int main(int argc, char const *argv[])
{
    int stevilo, maxSumand;

    scanf("%d%d", &stevilo, &maxSumand);

    tabela = calloc(sizeof(int), stevilo + 1);

    sestej(stevilo, maxSumand, 0);

    free(tabela);
    return 0;
}
