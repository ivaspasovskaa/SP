//
// Created by ivasp on 1/6/2023.
//Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100).
//На почетокот се внесуваат димензиите на матрицата, а потоа и елементите на матрицата кои се само вредностите 1 и 0.
//Програмата треба да изброи и отпечати на СИ во колку од редиците и колоните има барем 3 последователни елементи со вредност 1.
//Пример:
// 1 1 1 0
// 1 0 1 1
// 1 0 0 1
//1 ред + 1 колона = 2

#include <stdio.h>

int main(){
    int m,n;
    scanf("%d%d",&m,&n);

    int matrica[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrica[i][j]);
        }
    }

    int vkupno=0;
    for(int i=0;i<m;i++){
        int red=0;
        for(int j=0;j<n;j++){
            red+=matrica[i][j];
            if(red==3){
                vkupno++;
                break;
            }
            if(matrica[i][j]==0) red=0;
        }
    }

    for(int j=0;j<n;j++){
        int kolona=0;
        for(int i=0;i<m;i++){
            kolona+=matrica[i][j];
            if(kolona==3){
                vkupno++;
                break;
            }
            if(matrica[i][j]==0) kolona=0;
        }
    }

    printf("%d",vkupno);
    return 0;
}



#include <stdio.h>
/*
int main(){
    int m,n;
    scanf("%d%d",&m,&n);

    int a[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    int red,kolona,vk=0;
    for(int i=0;i<m;i++){
        red=0;
        for(int j=0;j<n;j++){
            red+=a[i][j];
            if(red>2){
                vk++;
                break;
            }
            if(a[i][j]==0) red=0;
        }
    }

    for(int j=0;j<n;j++){
        kolona=0;
        for(int i=0;i<m;i++){
            kolona+=a[i][j];
            if(kolona>2){
                vk++;
                break;
            }
            if(a[i][j]==0) kolona=0;
        }
    }

    printf("%d",vk);

    return 0;
}*/