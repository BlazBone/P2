#ifndef _LISTS_
#define _LISTS_

typedef struct _node
{
    int value;
    struct _node *next;
} node;

typedef node *list;


extern int num_nodes;
void lists(); //s tem se stvar prevede

#endif