#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int kolikoJihVidiDalec(int *visine, int stOseb)
{
    int stOsebKiVidi = 1;
    bool niZadnja = true;
    int j = 0;
    while (niZadnja)
    {
        int maksVisina = 0;
        int iMax = 0;
        for (int i = j; i < stOseb; i++)
        {
            if (visine[i]>maksVisina)
            {
                maksVisina = visine[i];
                iMax = i;
            }
               
        }
        if (iMax != stOseb - 1)
        {
            stOsebKiVidi++;
            visine[iMax] = -1;
            j = iMax;
            
        }else{
            break;
        }
        
        
    }
    
    return stOsebKiVidi;

}


int main(int argc, char const *argv[])
{
    int stOseb;

    scanf("%d", &stOseb);

    int *visine = malloc(stOseb * sizeof(int));

    for (int i = 0; i < stOseb; i++)
    {
        scanf("%d",&visine[i]);
    }
    
    printf("%d\n", kolikoJihVidiDalec(visine, stOseb));


    return 0;
}
