#include <stdio.h>


int sestej(int a)
{
    
    int vsota = 0;
    if(a == 1){
        printf("if vsota: %d   a: %d\n", vsota, a);
        return 1;
    }else{
        
        vsota = a + sestej(a - 1);
        printf("vsota: %d   a: %d\n", vsota, a);
        return vsota;
    }
    
}


int main(void)
{
    printf("%d\n" ,sestej(5));
    return 0;
}