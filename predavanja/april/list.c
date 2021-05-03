#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
    int value;
    struct _node *next;
} node;

//node je struktura
typedef node *list; // list je kazalec na strukturo

node *inserta(int n, node *lst)
{
    node *l = (node *)malloc(sizeof(node));
    l->value = n;
    l->next = lst;
    return l;
}

node *instertz_itr(int n, node *lst)
{

    if (lst = NULL)
    {
        lst = (node*)malloc(sizeof(node));
        lst->value = n;
        lst->next = NULL;
        return lst;
    }
    else
    {
        node *l = lst;
        while (l->next != NULL)
        {
            l = l->next;
        }
        l->next = (node*)malloc(sizeof(node));
        l = l->next;
        l->value = n;
        l->next = NULL;
        return lst;

    }
}


node *insertz_rek(int n, node *lst)
{
    if(lst == NULL){
        lst = (node*)malloc(sizeof(node));

        lst->value = n;
        lst->next = NULL;
        return lst;
    }else{
        lst->next = insertz_rek(n, lst->next);
        return lst;
    }

    
}

void print_itr(node *lst)
{
    node *l = lst;

    while (l != NULL)
    {
        printf("%d ", l->value);
        l = l->next;
    }
    printf("\n");
}
void delete_all_rek(node *lst)
{
    if (lst = NULL)
        return;
    
    delete_all_rek(lst->next);  //sprostimo rep
    free(lst);
                //sprostimo glavo
}

void print_rek(node *lst)
{
    if (lst == NULL)
    {
        printf("\n");
        return;
    }
    printf("%d ", lst->value);
    print_rek(lst->next);
}

int main(void)
{
    list l = NULL;

    l = inserta(10, l);
    l = inserta(5, l);
    l = inserta(4, l);
    l = inserta(3, l);
    l = inserta(2, l);
    l = inserta(1, l);
    
    print_itr(l);
    l = inserta(3, l);
    print_rek(l);
    delete_all_rek(l);
    

    
    print_rek(l);


    return 0;
}
