//
// Created by ivasp on 1/13/2023.
//Да се напише рекурзивна функција за наоѓање на максималната цифра од даден цел број.
//Од стандарден влез се внесуваат непознат број цели броеви се додека не се внесе нешто што не е број.
//За секој од нив да се испечати максималната цифра во посебен ред.
//Забелешка: Решението со рекурзивна функција носи 100% од поените, а со нерекурзивна функција 70% од поените.
//Забелешка: ЗАБРАНЕТО е користење на глобални променливи.

#include <stdio.h>

//iterativno
/*int maksimalnaCifra(int n){
    int max=0;
    while(n){
        if(max<(n%10)){
            max=n%10;
        }
        n/=10;
    }
    return max;
}*/

//rekurzivno
int maksimalnaCifra(int n,int max){
    if(max<n%10) max=n%10;
    if(n==0) return max;
    else return maksimalnaCifra(n/10,max);
}

int main(){
    int broj;
    while(scanf("%d",&broj)){
        int max=broj%10;
        printf("%d\n",maksimalnaCifra(broj,max));
    }

    return 0;
}