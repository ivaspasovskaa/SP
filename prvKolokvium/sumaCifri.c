//
// Created by ivasp on 11/22/2022.
//1357 (3+7=10) i 64 (6+4=10) imaat ista suma

#include <stdio.h>

int sumaNeparni(int broj){
    int br=0;
    int promenliva=broj;
    while(promenliva){
        int n=promenliva%10;
        br++;
        promenliva/=10;
    }
    int suma=0;
    for(int i=1;i<=br;i++){
        int cifra=broj%10;
        if(i%2!=0){ //ako se bara za neparni pozicii i i%2!=1 ako se bara za parni pozicii
            suma+=cifra;
        }
        broj/=10;
    }

    return suma;
}

int sumaB(int broj){
    int suma1=0;
    while(broj){
        int n=broj%10;
        suma1+=n;
        broj/=10;
    }
    return suma1;
}

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    if(a<=0 || b<=0){
        printf("Invalid input");
        return 0;
    }
    if(b>a){
        int tmp=a;
        a=b;
        b=tmp;
    }

    if(sumaNeparni(a)==sumaB(b)) printf("Ista suma");
    else printf("NE");

    return 0;
}