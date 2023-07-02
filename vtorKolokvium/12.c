//
// Created by ivasp on 1/13/2023.
//Да се напише рекурзивна функција која ќе го најде бројот на позитивни броеви од целобројна низа.
//Функцијата како аргумент ја прима низата, за која се бара бројот на позитивни броеви и вкупниот број на елементи, кои ги има таа низа.
//Функцијата е зададена со следниот прототип: int BrojPozitivni(int niza[], int n);
//Да се напише и функција main() за тестирање на функцијата BrojPozitivni.

#include <stdio.h>

int BrojPozitivni(int niza[], int n);

int main(){
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int br=BrojPozitivni(a,n);
    printf("%d",br);

    return 0;
}

int BrojPozitivni(int niza[], int n){
    if(n==0) return 0;
    else{
        return(niza[n]>0)+BrojPozitivni(niza,n-1);
    }
}