//
// Created by ivasp on 1/13/2023.
//Од тастатура се внесуваат димензиите на една матрица (m,n <= 100), а потоа и елементите од матрицата.
//Да се трансформира матрицата така што средниот елемент во секоја редица ќе се замени со разликата (по апсолутна вредност)
//на сумата на елементите во првата половина од редицата и сумата на елементите во втората половина на редицата.
//Ако матрицата има парен број колони, се менува вредноста на средните два елемента.
//Средниот/те елемент/и влегува/ат во сумите (при непарен број на колони, средниот елемент влегува во двете суми!).
//Да се испечати на екран променетата матрица.

#include <stdio.h>
#include <math.h>

int main(){
    int m,n;
    scanf("%d%d",&m,&n);

    int a[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<m;i++){
        int suma1=0,suma2=0;

        if(n%2==1){
            for(int j=0;j<=n/2;j++){
                suma1+=a[i][j];
            }
            for(int j=n/2;j<n;j++){
                suma2+=a[i][j];
            }
            a[i][n/2]=fabs(suma1-suma2);
        }

        else {
            for(int j=0;j<=(n/2)-1;j++){
                suma1+=a[i][j];
            }
            for(int j=n/2;j<n;j++){
                suma2+=a[i][j];
            }
            a[i][n/2]=fabs(suma1-suma2);
            a[i][(n/2)-1]=fabs(suma1-suma2);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}