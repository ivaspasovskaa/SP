//
// Created by ivasp on 11/22/2022.
//ramka ili slika m redici n koloni

#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d", &m,&n);
    if(m<=2 || n<=2) return 0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==m-1 || j==0 || j==n-1) printf("+");
            else printf("-");
        }
        printf("\n");
    }

    return 0;
}
