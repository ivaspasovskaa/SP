//
// Created by ivasp on 1/19/2023.
//Од стандарден влез се чита природен број N (N <= 100), како и низа a[ ] од N цели броеви.
//Да се напише функција void premesti(а, n) која го преместува секој пронајден негативен број на крајот на низата.
//По преместувањето редоследот на позитивните броеви треба да остане ист како и во оригиналната низа, а истото важи и за редоследот на негативните.
//Нaпишете програма која ќе ја повика функцијата premesti за внесената низа a[ ] и потоа ќе ја испечати новодобиената низа.

#include <stdio.h>
/*
void premesti(int *a,int n){
    int tmpN=n;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            int tmp=a[i];
            for(int j=i;j<n-1;j++){
                a[j]=a[j+1];
            }
            a[n-1]=tmp;
            i--;
            tmpN--;
        }
    }
}
*/

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void premesti(int *a,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]<0 && a[j+1]>0){
                swap(&a[j],&a[j+1]);
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);

    int niza[100];
    for(int i=0;i<n;i++){
        scanf("%d",&niza[i]);
    }

    premesti(niza,n);

    for(int i=0;i<n;i++){
        printf("%d ",niza[i]);
    }

    return 0;
}