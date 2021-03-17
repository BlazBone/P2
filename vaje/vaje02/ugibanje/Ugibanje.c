#include <stdio.h>

int main(void)
{
    int spMeja, zgMeja;
    scanf("%d%d", &spMeja, &zgMeja);

    int poskusRacunalnika = (spMeja + zgMeja) / 2;
    int smer = 0;

    do
    {
        scanf("%d", &smer);
        
        switch (smer)
        {
        case -1:
            zgMeja = poskusRacunalnika - 1;
            spMeja = spMeja;
            break;
        case 1:
            spMeja = poskusRacunalnika + 1;
            zgMeja = zgMeja;
            break;
        }

       
        poskusRacunalnika = (spMeja + zgMeja) / 2;

        //printf("%d  %d  %d\n", spMeja, zgMeja, poskusRacunalnika);

    } while (smer != 0);
    
     if(spMeja > zgMeja){
            printf("PROTISLOVJE\n");
            
    }else if (spMeja == zgMeja)
    {
        printf("%d\n", spMeja);
    }else{
        printf("%d %d\n", spMeja, zgMeja);
    }
    

    return 0;
}