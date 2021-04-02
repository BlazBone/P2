#include <stdio.h>


void hanoi1 (char t1, char t2, char t3)
{

    printf("%c --> %c\n", t1, t3);

}
void hanoi2 (char t1, char t2, char t3)
{
    printf("%c --> %c\n", t1, t2);  // hanoi1(t1, t3, t2)
    printf("%c --> %c\n", t1, t3);  //hanoi1(t1, t2, t3)
    printf("%c --> %c\n", t2, t3);  //hanoi1(t2, t1, t3)
}
void hanoi3 (char t1, char t2, char t3)
{
    printf("%c --> %c\n", t1, t3);  //hanoi1(t1,t2,t3)  //}
    printf("%c --> %c\n", t1, t2);  //hanoi1(t1,t3,t2)  //} hanoi2(t1, t3, t2)
    printf("%c --> %c\n", t3, t2);  //hanoi1(t3,t1,t2)  //}
    
    printf("%c --> %c\n", t1, t3);  //hanoi1(t1,t2,t3)
    
    printf("%c --> %c\n", t2, t1);  //hanoi1(t2,t3,t1)  //}
    printf("%c --> %c\n", t2, t3);  //hanoi1(t2,t1,t3)  //} hanoi2(t2, t1, t3)
    printf("%c --> %c\n", t1, t3);  //hanoi1(t1,t2,t3)  //}
}

int num_moves = 0; // 1 3 7 15 31 63.... (2^n) - 1

void hanoi (int n, char t1, char t2, char t3)
{
    if(n == 1)
    {
        num_moves++;
        printf("%c --> %c\n", t1, t3);
    }else
    {
        hanoi(n - 1, t1, t3, t2);
        hanoi(1, t1, t2, t3);
        hanoi(n - 1, t2, t1, t3);
    }
}

int main(void)
{
    //hanoi3('A', 'B', 'C');
    printf("\n \n \n");


    hanoi(4, 'A', 'B', 'C');
    printf("%d\n", num_moves);
    return 0;
}
