//
// Created by ivasp on 1/19/2023.
//Од тастатура се чита природен број N (N < 400).
//Да се напише програма којашто формира квадратна матрица што ги содржи броевите од 1 до N
//по растечки редослед на следниот начин: во првата колона во правец од горе надолу,
//па продолжува во втората колона од долу нагоре, па продолжува во третата колона од горе надолу итн.
//Да се избере најмалата димензија на матрицата во која ќе ги собере сите броеви до N.
//Доколку има преостанати празни места, тие да се пополнат со нули.
//Формираната матрица да се запише во датотека "shema.txt".

#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);

    int m=ceil(sqrt(n));
    int element=1;

    int matrica[100][100];
    for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=0;i<m;i++){
                matrica[i][j]=element++;
            }
        }

        else{
            for(int i=m-1;i>=0;i--){
                matrica[i][j]=element++;
            }
        }
    }

    FILE *f=fopen("shema.txt","w");

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(matrica[i][j]>n) matrica[i][j]=0;
            fprintf(f,"%d ",matrica[i][j]);
        }
        fprintf(f,"\n");
    }
    fclose(f);
    return 0;
}