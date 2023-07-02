//
// Created by ivasp on 1/19/2023.
//Од стандарден влез се чита природен број N (N <= 100), како и низа од позитивни цели броеви a[ ] со N елементи.
//Да се напише функција int par(a, n) која ќе го врати најмалиот елемент во низата кој се појавува парен број пати во низата.
//Доколку нема таков елемент, функцијата враќа вредност 0.
//Напишете програма што ќе ја повика функцијата par за внесената низа a[ ] и
//ќе го испечати најмалиот број којшто се појавува парен број пати во низата a[ ].

#include <stdio.h>

int par(int *a, int n){
    int min=0,flag=1;
    for(int i=0;i<n;i++){
        int counter=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                ++counter;
            }
        }
        if(counter%2==0){
            if(flag){
                min=a[i];
                flag=0;
            }
            else if(min>a[i]){
                min=a[i];
            }
        }
    }
    return min;
}

int main(){
    int n;
    scanf("%d",&n);

    int niza[100];
    for(int i=0;i<n;i++){
        scanf("%d",&niza[i]);
    }

    if(par(niza,n)==0)
        printf("Nitu eden element ne se pojavuva paren broj pati!");

    else
        printf("Najmaliot element koj se pojavuva paren broj pati e %d", par(niza,n));

    return 0;
}