//
// Created by ivasp on 11/13/2022.
//Еден природен е „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
//Обратен број е бројот составен од истите цифри, но во обратен редослед (653 = 356)
//Од тастатура се внесува n (n>9)
//Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“.
//Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).

#include <stdio.h>

int obratenBroj(int x){
    int obraten=0;
    while(x){
        int cifra=x%10;
        obraten=10*obraten+cifra;
        x/=10;
    }
    return obraten;
}

int brojNaCifri(int x){
    int br=0;
    while(x){
        int cifra=x%10;
        br++;
        x/=10;
    }
    return br;
}

int main(){
    int n;
    scanf("%d",&n);
    if(n<=9){
        printf("Brojot ne e validen");
        return 0;
    }

    for(int i=n-1;i>0;i--){
        if(obratenBroj(i)%brojNaCifri(i)==0){
            printf("%d",i);
            return 0;
        }
    }

    return 0;
}