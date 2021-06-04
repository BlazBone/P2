#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 100%
typedef struct Stack {
    int data;
    struct Stack *next;
}s;

s *top = NULL; 
s *new;

void push(int data)
{
    new = (s *)malloc(sizeof(s));
    new->data = data;
    new->next = NULL;

    if (!top)
        top = new;
    else {
        new->next = top;
        top = new;
    }
}

void pop()
{
    s *temp = top;
    top = top->next;
    free(temp);
}

int isBalanced(char *s)
{
    int i = 0, j = 0;
    char c[strlen(s) - 1];

    for (i = 0; i <= strlen(s) - 1; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            c[j++] = s[i];
        else {
            if (s[i] == ')' && c[--j] == '(')
                ;
            else {
                if (s[i] == '}' && c[--j] == '{')
                    ;
                else {
                    if (s[i] == ']' && c[--j] == '[')
                        ;
                    else
                        return 0;
                }
            }
        }
    }
    if (j == 0)
        return 1;
    return 0;
}

int main()
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char *s = (char *)malloc(1000 * sizeof(char));
        scanf("%s", s);
        sum += isBalanced(s);
    }
    printf("%d\n", sum);
    return 0;
}


/* int counter = 0;
bool vredu(char* niz);

bool vredu(char* niz) {
    int variable = 0;
    int n = strlen(niz);
    if (n == 0)
        return true;
    for (int i = 0; i < n; i++) {
        if (niz[i] == '(') {
            variable *= 10;
            variable++;
        } else if (niz[i] == '[') {
            variable *= 10;
            variable += 2;
        } else if (niz[i] == ')') {
            if (variable == 0)
                return false;
            int c = variable % 10;
            if (c == 1)
                variable /= 10;
            else
                return false;
        } else if (niz[i] == ']') {
            if (variable == 0)
                return false;
            int c = variable % 10;
            if (c == 2)
                variable /= 10;
            else
                return false;
        }
    }
    if (variable == 0)
        return true;
    return false;
}

int main() {

    int n;
    scanf("%d", &n);

    char** nizi = malloc(n * sizeof(char*));

    for (int i = 0; i < n; i++) {
        nizi[i] = malloc(1001 * sizeof(char));
        scanf("%s", nizi[i]);
        bool c = vredu(nizi[i]);
        if (c)
            counter++;
    }
    printf("%d\n", counter);
    return 0;
} */
