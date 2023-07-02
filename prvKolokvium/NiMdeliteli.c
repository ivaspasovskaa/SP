//
//Created by ivasp on 11/25/2022.
//Од тастатура се внесуваат два природни броја M (M > 2) и N.
//Да се напише програма која ќе го најде и испечати првиот број помал од N кој има помалку од M делители (1 и N се делители на N)

#include <stdio.h>

int deliteli(int x){
    int d=0;
    for(int i=1;i<=x;i++){
        if(x%i==0) d++;
    }
    return d;
}

int main(){
    int m,n;
    scanf("%d %d", &m,&n);
    if(m<=2) return 0;

    for(int i=n-1;i>0;i--){
        if(deliteli(i)<m){
            printf("%d", i);
            break;
        }
    }

    return 0;
}