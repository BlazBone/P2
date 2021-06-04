#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int *stevila;
int st;
void sprintaj(int* t) {
    printf("{");
    int bul = 0;
    for(int i = 0; i < st;i++) {
        if(bul == 0 && t[i] > INT_MIN) {
            printf("%d",t[i]);
            bul = 1;
        }
        else if(t[i] > INT_MIN) {
            printf(", %d",t[i]);    
        }
    }
    printf("}\n");
}


/* void najdi(int index, int *tabela)
{
    //vkljucis ali pa ne

    if (index == st) {
        sprintaj(tabela);
        return;
    }
    tabela = realloc(tabela, st * sizeof(int));
    tabela[index] = INT_MIN;
    najdi(index + 1, tabela);

    // tabela = realloc(tabela, st * sizeof(int));
    tabela[index] = stevila[index];
    najdi(index + 1, tabela);
    return;
} */
void najdi(int index,int* tabela) {
    //vkljucis ali pa ne 

    if(index == st){
        sprintaj(tabela);
        return;    
    }
    int* prva;
    prva =  realloc (tabela,st * sizeof(int));
    prva[index] = INT_MIN;
    najdi(index + 1, prva);

    int* druga =  realloc (tabela,st * sizeof(int));
    druga[index] = stevila[index];
    najdi(index + 1, druga);
    return;
}
int main()
{
    st = 0;
    scanf("%d", &st);
    stevila = malloc(st * sizeof(int));
    for (int i = 0; i < st; i++) {
        scanf("%d", &stevila[i]);
    }
    najdi(0, malloc(st * sizeof(int)));
    return 0;
}