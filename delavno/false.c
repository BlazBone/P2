#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool izjava()
{
    char c = getchar();
    if (c == 'T')
    {
        return true;
    }else if (c == 'F')
    {
        return false;
    }else if (c == '!')
    {   
        return !(izjava());
    }else if (c == '|')
    {  
        bool ena = izjava();
        bool dva = izjava();
        return ena || dva;
    }else if (c == '&')
    {
        bool ena = izjava();
        bool dva = izjava();
        return ena && dva;
    }
    
}


int main(int argc, char const *argv[])
{
    printf("%d\n", izjava());
    return 0;
}


