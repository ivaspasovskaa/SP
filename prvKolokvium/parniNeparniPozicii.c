//
// Created by ivasp on 11/22/2022.
//
//najmal zbir na cifri na parni pozicii
//najgolem zbir na cifri na neparni cifri
// 5094 neparni: 4+0=4 i parni 9+5=14

#include <stdio.h>

int zbirParni(int broj) {
    int br=0;
    int promenliva=broj;
    while(promenliva){
        br++;
        promenliva/=10;
    }

    int zbir1=0;
    for(int i=1;i<=br;i++){
        int cifra=broj%10;
        if(i%2!=0){
            zbir1+=cifra;
        }
        broj/=10;
    }
    return zbir1;
}

int zbirNeparni(int broj){
    int br=0;
    int promenliva=broj;
    while(promenliva){
        br++;
        promenliva/=10;
    }

    int zbir2=0;
    for(int i=1;i<=br;i++){
        int cifra=broj%10;
        if(i%2!=1){
            zbir2+=cifra;
        }
        broj/=10;
    }
    return zbir2;
}

int main() {
    int n;
    int max=0;
    int min=9999;
    int brojmin,brojmax;
    while(scanf("%d",&n)){
        if(zbirParni(n)<min){
            min=zbirParni(n);
            brojmin=n;
        }

        if(zbirNeparni(n)>max){
            max=zbirNeparni(n);
            brojmax=n;
        }
    }

    printf("Najmal: %d\nNajgolem: %d", brojmin, brojmax);

    return 0;
}