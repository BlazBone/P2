#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum typ { t_int, t_float };

union val {
    int v_int;
    float v_float;
};

typedef struct _node {
    enum typ type;
    union val value;
    struct _node *next;
    struct _node *prev;
} node;

node *ins_next(enum typ t, union val v, node *n) {

    if (n == NULL) {

        n = (node *)malloc(sizeof(node));
        n->type = t;
        n->value = v;
        n->next = n;
        n->prev = n;

        return n;
    } else {

        node *new_node = (node *)malloc(sizeof(node));
        new_node->type = t;
        new_node->value = v;
        new_node->next = n->next;
        new_node->prev = n;

        new_node->next->prev = new_node;
        new_node->prev->next = new_node;

        return new_node;
    }
}

node *ins_prev(enum typ t, union val v, node *n) {
    node *tmp = n->prev;
    tmp = ins_next(t, v, tmp);
    return n;
}

void print(node *fst, node *lst) {
    if (fst == NULL)
        return;

    if (lst == NULL)
        lst = fst->prev;

    switch (fst->type) {
    case t_int:
        printf("%d ", fst->value.v_int);
        break;
    case t_float:
        printf("%f ", fst->value.v_float);
        break;
    }

    if (fst != lst)
        print(fst->next, lst);
    else
        printf("\n");
}

int main(void) {
    node *n;

    print(n, NULL);

    n = ins_next(t_int, (union val)3, n);
    print(n, NULL);

    n = ins_next(t_float, (union val)3.14f, n);
    print(n, NULL);

    n = ins_next(t_int, (union val)2, n);
    print(n, NULL);

    n = ins_prev(t_int, (union val)9, n);
    print(n, NULL);

    return 0;
}