//
// Created by ivasp on 11/22/2022.
//
// proverka na parni i neparni cifri
//vkupniot broj na broevi chij zbir na parni cifri e pogolem od 5
//vkupniot broj na broevi chij zbir na neparni cifri e pomal ili ednakov na 5
//ako brojot nema nitu edna parna, odnosno neparna cifra, zbirot e nula

#include <stdio.h>

int main(){
    int n, parni=0, neparni=0;

    while(scanf("%d",&n)){
        //if(n<10) continue;
        int zbirParni=0, zbirNeparni=0;
        while(n){
            int cifra=n%10;
            if(cifra%2==0) zbirParni+=cifra;
            if(cifra%2==1) zbirNeparni+=cifra;
            n/=10;
        }

        if(zbirParni>5) parni++;
        if(zbirNeparni<=5) neparni++;
    }

    printf("Broevi so zbir pogolem od 5: %d", parni);
    printf("\nBroevi so zbir pomal ili ednakov od 5: %d", neparni);

    return 0;
}