
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "naloga2.h"

int gcd(int a, int b)
{
    int gcd = 0;
    if (a < 0)
    {
        a *= -1;
    }

    if (b < 0)
    {
        b *= -1;
    }
    
    
    for(int i=1; i <= a && i <= b; ++i)
    {
        // Checks if i is factor of both integers
        if(a%i==0 && b%i==0)
            gcd = i;
    }

    return gcd;
}

int lcm(int a, int b)
{
    int lcm = 1;
    while (true)
    {
        if(lcm % a== 0 && lcm % b == 0){
            return lcm;
        }
        lcm++;
    }
    return 0;

}
Tocka okrajsaj(int a, int b, int c, int d)
{
    int AB = gcd(a,b);
    a = a/AB;
    b = b/AB;
    if (b < 0)
    {
        b *= -1;
        a *= -1;
    }
    
    int CD =gcd(c,d);
    c = c/CD;
    d = d/CD;

    if (d < 0)
    {
        d *= -1;
        c *= -1;
    }
    

    return (Tocka){(Ulomek){a,b}, (Ulomek){c,d}};

}



Tocka projekcija(Tocka t, Premica p) {
    
    if (p.navpicna)
    {
        return (Tocka) { p.n,  t.y };
    }else if(p.k.st == 0){
        return (Tocka) { t.x,  p.n };
    }else{
        
        
        int stevZmno = -1*p.k.im * t.x.st;
        int imeZmno = p.k.st * t.x.im; 
    //printf("st:%d  im:%d\n", stevZmno, imeZmno);
        int lcm1 = lcm(imeZmno, t.y.im);

        int nIme = lcm1;
        int nSte = t.y.st * (lcm1/t.y.im) - stevZmno * (lcm1/imeZmno);

        //printf("%d/%d\n",nSte,nIme);

        int lcmN = lcm(p.n.im, nIme);
        int stX = p.k.im * p.k.st * (nSte*lcmN/nIme - p.n.st*lcmN/p.n.im);
        int imX = lcmN*(p.k.st*p.k.st + p.k.im*p.k.im);

        //printf("stX:%d  imX:%d\n", stX, imX);

        int zmIm = imX * p.k.im;
        int zmSt = stX * p.k.st;
        //printf("zm: %d/%d\n", zmSt,zmIm);

        int imY = lcm(zmIm, p.n.im);
        int stY = zmSt * (imY/zmIm) + p.n.st*(imY/p.n.im);

        //printf("X: %d/%d    Y: %d/%d\n", stX,imX,stY,imY);

        Tocka konc = okrajsaj(stX ,imX, stY, imY);
        return konc;
    }
    


    
}



int main() {
    

    return 0;
}