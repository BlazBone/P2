
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga1.h"


void urediArray(VO **naredilo, int dolzina)
{
    for (int i = 0; i < dolzina - 1; i++)
    {
        if (naredilo[i]->ocena < naredilo[i+1]->ocena)
        {
            VO *temp = naredilo[i];
            naredilo[i] = naredilo[i+1];
            naredilo[i+1]=temp;
            i = 0;
        }else if(naredilo[i]->ocena == naredilo[i+1]->ocena){
            if (naredilo[i]->vpisna > naredilo[i+1]->vpisna)
            {
                VO *temp = naredilo[i];
                naredilo[i] = naredilo[i+1];
                naredilo[i+1]=temp;
                i = 0;
            }   
        }
    }
    

}



VO** opravili(Student** studentje, int stStudentov, char* predmet, int* stVO) {
    VO** naredilo;
    naredilo = (VO**)calloc(sizeof(VO*), stStudentov);
    int voCount = 0;
  
    for (int i = 0; i < stStudentov; i++)
    {
        
        
        for (int j = 0; j < studentje[i]->stPO; j++)
        {
            if ((strcmp(studentje[i]->po[j].predmet, predmet) == 0) && (studentje[i]->po[j].ocena > 5) )
            {
                naredilo[voCount] = malloc(sizeof(VO));
                naredilo[voCount]->ocena = studentje[i]->po[j].ocena;
                naredilo[voCount]->vpisna = studentje[i]->vpisna;
                voCount++;
                
            } 
        }
    }

    for (int i = 0; i < voCount; i++)
    {
       urediArray(naredilo, voCount);
    }
    
    *stVO = voCount;
    
    return naredilo;
}


int main() {
        
    return 0;
}
