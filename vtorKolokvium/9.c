//
// Created by ivasp on 1/13/2023.
//Да се имплементира рекурзивна функција која за низа од цели броеви $[a{0}, a{1}, ..., a_{n-1}]$
//ќе ја пресмета вредноста на непрекинатата дропка дефинирана како: v=a0+1a1+...1an−2+1an−1
//Да се напише програма во која се чита цел број N, по што се читаат елементите на низа од N цели броеви (не повеќе од 100).
//Потоа се повикува рекурзивната функција и се печати резултатот во нов ред.

#include <stdio.h>

float recursion(int *a,int n,int i){
    if(i>n) return 0;
    else{
        return (float)a[i]+(1/ recursion(a,n,i+1));
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    float r=recursion(a,n,0);
    printf("%f",r);

    return 0;
}