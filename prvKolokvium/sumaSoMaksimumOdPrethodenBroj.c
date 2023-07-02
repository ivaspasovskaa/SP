//
// Created by ivasp on 11/13/2022.
//Од тастатурата се читаат непознат број позитивни цели броеви се додека не се внесе нешто различно од број
//За секој број треба да се пресмета збирот на цифрата со максимална вредност од претходно внесениот број и
//сумата на цифрите на тековниот број (за првиот број се пресметува само сумата на неговите цифри)
//[број]: [сумата на цифрите на бројот + максималната цифра од претходниот број]

#include <stdio.h>
int sumaNaCifrite(int x){
    int suma=0;
    while(x){
        int cifra=x%10;
        suma+=cifra;
        x/=10;
    }
    return suma;
}
int maxCifra(int y){
    int max=0;
    while(y){
        int poslednaCifra=y%10;
        if(poslednaCifra>max) max=poslednaCifra;
        y/=10;
    }
    return max;
}

int main(){
    int broj;
    int prethodnaCifra=0;
    while(scanf("%d",&broj)){
        int suma=sumaNaCifrite(broj)+prethodnaCifra;
        printf("%d: %d\n",broj,suma);
        prethodnaCifra=maxCifra(broj);
    }
    return 0;
}