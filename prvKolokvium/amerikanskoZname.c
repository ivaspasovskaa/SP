//
// Created by ivasp on 11/22/2022.
//
//amerikansko zname so m redici i n koloni
//.*.*.*
//*.*.*.
//.*.*.*
//*.*.*.

#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d", &m,&n);
    if(m<=2 || n<=2) return 0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){
                if(j%2==0) printf(".");
                else printf("*");
            }

            else{
                if(j%2==0) printf("*");
                else printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}


//radovishka tatlija
/*#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d", &m,&n);
    if(m<=2 || n<=2) return 0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){
                if(j%2==0) printf("%%");
                else printf("+");
            }

            else{
                if(j%2==0) printf("+");
                else printf("%%");
            }
        }
        printf("\n");
    }

    return 0;
}*/