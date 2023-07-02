//
// Created by ivasp on 1/20/2023.
//Во рамките на текстуална датотека matrica.txt се сместени елементите од една матрица (A), составена од природни броеви.
//Во првиот ред од датотеката се запишани бројот на редици N и бројот на колони M на матрицата (N, M < 100).
//Потоа, во секој ред од датотеката се запишани елементите од соодветната редица на матрицата.
//За секоја редица, да се испечати индексот на редицата и бројот на штосни броеви во таа редица во формат
//indeks_na_redica: broj_na_stosni_broevi_vo_taa_redica (види тест пример).
//Штосен број е број чија парност е иста со парноста на збирот од индексите на редицата и колоната на елементот.

#include <stdio.h>

int shtosen(int x,int i,int j){
    if(x%2==0){
        if((10*i+j)%2!=0)
            return 0;
    }
    else{
        if((10*i+j)%2==0)
            return 0;
    }
    return 1;
}

int main(){
    FILE *f=fopen("matrica.txt","r");

    int n,m;
    fscanf(f,"%d %d",&n,&m);

    int a[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fscanf(f,"%d",&a[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        int shtosni=0;
        for(int j=0;j<m;j++){
            if(shtosen(a[i][j],i,j)){
                shtosni++;
            }
        }
        printf("%d: %d",i,shtosni);
    }
    fclose(f);

    return 0;
}