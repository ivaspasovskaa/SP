//
// Created by ivasp on 1/6/2023.
//Од тастатура се внесуваат димензиите на една матрица (m, n <= 100),
//а потоа и елементите од матрицата. Да се генерира низа (со најмногу m) така што
//секој елемент од низата се добива со наоѓање на елементот во секоја редица од матрицата
//што е најоддалечен од аритметичката средина во рамки на таа редица.
//Ако постојат повеќе елементи што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот.
//Редоследот на запишување на елементите во низата одговара на редоследот на редиците.

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
        float zbir=0;
        for(int j=0;j<n;j++){
            zbir+=a[i][j];
        }
        float aritmetickaSredina=zbir/n;
        int najoddalecen=a[i][0];
        float najgolemaRazlika=fabs(aritmetickaSredina-a[i][0]);

        for(int j=1;j<n;j++){
            if(fabs(aritmetickaSredina-a[i][j])>najgolemaRazlika){
                najgolemaRazlika=fabs(aritmetickaSredina-a[i][j]);
                najoddalecen=a[i][j];
            }
        }
        printf("%d ",najoddalecen);
    }
    return 0;
}