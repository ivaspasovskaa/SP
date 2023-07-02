//
// Created by ivasp on 1/20/2023.
//Во рамките на текстуална датотека matrica.txt се сместени елементите (целобројни вредности) од една матрица (A).
//Во првиот ред од датотеката се запишани бројот на редици n и бројот на колони m на матрицата (n, m < 120).
//Потоа, во секој ред од датотеката се запишани елементите од соодветната редица на матрицата.
//Да се испечати колку индексни броеви има во секоја колона поединечно.
//Индексен број е број чија вредност е идентична со вредноста што се добива со спојување на индексот од редицата и колоната на елементот.

#include <stdio.h>
#include <math.h>

int digits(int n){
    int counter=0;
    while(n){
        ++counter;
        n/=10;
    }
    return counter;
}

int indeksen(int n,int i,int j){
    int ind=0;

    if(j<10){
        if(n==10*i+j) ind=1;
    }
    else{
        if(i<10){
            if(n==pow(10, digits(j))*i+j) ind=1;
        }
        else{
            if(n==pow(10, digits(i))*i+j) ind=1;
        }
    }
    return ind;
}

int main(){
    FILE *f=fopen("matrica.txt","r");

    int n,m;
    fscanf(f,"%d %d",&n,&m);

    int a[150][150];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fscanf(f,"%d",&a[i][j]);
        }
    }

    for(int j=0;j<m;j++){
        int counter=0;
        for(int i=0;i<n;i++){
            if(indeksen(a[i][j],i,j))
                ++counter;
        }
        printf("%d\n",counter);
    }
    fclose(f);

    return 0;
}