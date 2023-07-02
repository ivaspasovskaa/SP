//
// Created by ivasp on 11/22/2022.
//m=3 redici i n=4 koloni m<n
//***+
//**++
//*+++
#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d", &m,&n);
    if(m>=n) return 0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if((i+j)<(n-1)) printf("*");
            else printf("+");
        }
        printf("\n");
    }

    return 0;
}