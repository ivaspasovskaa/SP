//
// Created by ivasp on 11/23/2022.
//
//najznachajni najneznachajni cifri

#include <stdio.h>
#include <math.h>

int brojac(int x){
    int br=0;
    while(x){
        br++;
        x/=10;
    }
    return br;
}

int main(){
    int n;
    int pozicijaMin=0, pozicijaMax=0,pozicija=0;
    int max=0, min=9;
    int brojMax, brojMin;
    while(scanf("%d",&n)){
        pozicija++;
        int cifra1=n%10;
        if(cifra1<=min){
            min=cifra1;
            brojMin=n;
            pozicijaMin=pozicija;
        }

        int cifra2=n/(pow(10,(brojac(n)-1)));
        if(cifra2>=max){
            max=cifra2;
            brojMax=n;
            pozicijaMax=pozicija;
        }
    }

    printf("Najgolema najznacajna cifra ima brojot %d na pozicija %d", brojMax,pozicijaMax);
    printf("\nNajmala najneznacajna cifra ima brojot %d na pozicija %d", brojMin,pozicijaMin);

    return 0;
}