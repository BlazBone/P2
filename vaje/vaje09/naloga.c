
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "naloga.h"

int poisciStudenta(Student** studentje, int stStudentov, int vpisna) {
    
    Student *kazalecNaTabelo;

    
    int indeks = -1;
    for (int i = 0; i < stStudentov; i++)
    {
        kazalecNaTabelo = *studentje;
       
        if (vpisna == kazalecNaTabelo->vpisna)
        {
            indeks = i;
            break;
        } 
        studentje++;
    }
    return indeks;
}

int poisciPO(Student* student, char* predmet) {
    PO *tabelaPredmetov = student->po;
    int indeks = -1;
    int stPredmetov = student->stPO;

    for (int i = 0; i < stPredmetov; i++)
    {
        //printf("    %s      %s   %d",tabelaPredmetov->predmet, predmet, tabelaPredmetov->predmet == predmet);
        
     if(strcmp(tabelaPredmetov->predmet, predmet)==0){
            indeks = i;
            //printf("  smo tuki");
            break;
        }  
        tabelaPredmetov++; 
    }
    //printf("\n");

    return indeks;
}

int dodaj(Student** studentje, int stStudentov, int vpisna, char* predmet, int ocena) {
    int i = poisciStudenta(studentje, stStudentov, vpisna);
    if (i==-1) {
        Student *s = malloc(sizeof(Student));
        s->vpisna = vpisna;
        s->po = malloc(10*sizeof(PO));
        s->stPO = 0;
        studentje[stStudentov] = s;
        i = stStudentov;
        stStudentov++;
    }
    Student *s = studentje[i];
    int j = poisciPO(s, predmet);
    if (j==-1) {
        strcpy(s->po[s->stPO].predmet, predmet);
        j = s->stPO;
        s->stPO++;
    }
    s->po[j].ocena = ocena;
    return stStudentov;
}

int main() {
     

    return 0;
}
