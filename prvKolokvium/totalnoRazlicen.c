//
// Created by ivasp on 11/13/2022.
//Од стандарден влез се внесуваат 2 цели броја N и X.
//Да се најде најблискиот број помал од N кој е тотално различен од бројот X.
//Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.

#include <stdio.h>

int totalnoRazlicen(int n,int x){
    for(int i=n;i>0;i--){
        int cifraN=n%10;
        int promenliva=x;
        while (promenliva){
            int cifraX=promenliva%10;
            if(cifraX==cifraN){
                return 0;
            }
            promenliva/=10;
        }
        n/=10;
    }
    return 1;
}

int main(){
    int n,x;
    scanf("%d %d",&n,&x);

    for(int i=n-1;i>=0;i--){
        if(totalnoRazlicen(i,x)){
            printf("%d",i);
            break;
        }
    }
    return 0;
}
