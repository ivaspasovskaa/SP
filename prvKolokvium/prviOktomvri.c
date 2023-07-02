//
// Created by ivasp on 11/24/2022.
//Претпоставете дека денес е први октомври
//Нека знаете дека одреден колоквиум ќе се одржи точно N денови од денес
//Ако на влез сте го прочитале Н (0<N<80), на излез отпечатете го датумот на колоквиумот точно во формат “XX. mesec“
//влез: 20 излез: 21. oktomvri

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if(n>0 && n<=30) printf("%d. oktomvri",n+1);
    else if(n>30 && n<=60) printf("%d. noemvri", n-30);
    else if(n>60 && n<80) printf("%d. dekemvri", n-60);
    else return 0;

    return 0;
}