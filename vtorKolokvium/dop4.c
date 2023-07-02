//
// Created by ivasp on 1/19/2023.
//Од тастатура се внесуваат димензиите m и n на матрица од цели броеви, Аmxn, ( 0 < m, n < 30 ) и нејзините елементи.
//Потоа се внесуваат два цели броја r и k  (индекси на редица/колона од матрицата, т.е. 0 <= r < m и 0 <= k < n).
//Да се напише програма која ja трансформира матрицата А така што елементите над редицата r
//и лево од колоната k се заменуваат со минималната вредност од матрицата А.
//Новодобиената матрица да се запише во датотека "matrica.txt".

#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);

    int r,k;
    scanf("%d %d",&r,&k);

    int matrica[100][100];
    int min;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrica[i][j]);
            if(i==0 && j==0) min=matrica[i][j];

            if(min>matrica[i][j]) min=matrica[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<k;j++){
            matrica[i][j]=min;
        }
    }

    FILE *f=fopen("matrica.txt","w");
    for(int i=0;i<r;i++){
        for(int j=0;j<k;j++){
            fprintf(f,"%d ",matrica[i][j]);
        }
        fprintf(f,"\n");
    }
    fclose(f);

    return 0;
}