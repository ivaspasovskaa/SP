//
// Created by ivasp on 11/13/2022.
//Со помош на знааците '@','%' и '.' се формира квадратна слика со „должина“ m (m>2)
//која претставува квадрат од знаците '.', впишан во квадрат од знаците '@' и '%'
//За внесено m да се испечати на екран соодветната слика
//pletka
/*#include <stdio.h>

int main(){
    int m;
    scanf("%d",&m);
    if(m<=2) return 0;

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(j==0 || j==m-1) printf("%%");
            else{
                if(i==0 || i==m-1) printf("@");
                else printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}*/


//goblen
//+***+
//+%%%+
//+%%%+
//+%%%+
//+***+
#include <stdio.h>

int main(){
    int m;
    scanf("%d",&m);
    if(m<=2) return 0;

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(j==0 || j==m-1) printf("+");
            else{
                if(i==0 || i==m-1) printf("*");
                else printf("%%");
            }
        }
        printf("\n");
    }

    return 0;
}