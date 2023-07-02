//
// Created by ivasp on 11/23/2022.
//
//skrien oktalen broj

#include <stdio.h>
#include <math.h>

int oktalen(int n){
    int br=0;
    int temp=n;
    while(temp){
        br++;
        temp/=10;
    }

    int zbirO=0;
    for(int i=0;i<br;i++){
        int cifra=n%10;
        zbirO+=cifra*pow(8,i);
        n/=10;
    }
    return zbirO;
}

int main(){
    char znak;
    int zbir=0;
    while(znak!='.'){
        scanf("%c", &znak);
        if(znak>='0' && znak<='7')
            zbir=10*zbir+znak-'0';
    }
    printf("%d %d", zbir, oktalen(zbir));
    return 0;
}