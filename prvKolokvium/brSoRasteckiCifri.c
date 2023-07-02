//
// Created by ivasp on 11/24/2022.
//Од тастатура се внесува позитивен цел број N.
//Да се напише програма која ќе го испечати првиот број поголем од N во кој цифрите се во растечки редослед.

#include <stdio.h>

int rasteckiBroj(int x){
    while(x){
        int poslednaCifra = x % 10;
        int pretposledna = x / 10 % 10;

        if(poslednaCifra<=pretposledna) return 0;
        x/=10;
    }

    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    if(n<0) return 0;

    for(int i=n+1; ;i++){
        if(rasteckiBroj(i)){
            printf("%d",i);
            break;
        }
    }
    return 0;
}