//
// Created by ivasp on 11/22/2022.
//
//se pechatat broevite chij zbir na cifri na parni pozicii e pogolem od zbirot na cifri na neparni pozicii
//1234 parni: 3+1=4 neparni: 4+2=6 - se pechati "Nema"

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
        if(i%2==0){
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
        if(i%2!=0){
            zbir2+=cifra;
        }
        broj/=10;
    }

    return zbir2;
}

int main() {
    int n, br=0;
    while(scanf("%d",&n)){
        if(zbirParni(n)>zbirNeparni(n)){
            printf("%d\n", n);
            br++;
        }
    }
    if(br==0) printf("Nema");

    return 0;
}


//BROEVI BROEVI CIFRI CIFRI
//vkupniot broj na broevi chij zbir na cifri na neparni pozicii e pogolem od 5
//vkupniot broj na broevi chij zbir na cifri na parni pozicii e pomal ili ednakov na 5

#include <stdio.h>

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
        if(i%2!=0){
            zbir2+=cifra;
        }
        broj/=10;
    }
    return zbir2;
}

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
        if(i%2==0){
            zbir1+=cifra;
        }
        broj/=10;
    }
    return zbir1;
}

int main(){
    int n, parni=0, neparni=0;

    while(scanf("%d",&n)){
        if(zbirNeparni(n)>5) parni++;
        if(zbirParni(n)<=5) neparni++;
    }

    printf("Broevi so zbir pogolem od 5: %d", parni);
    printf("\nBroevi so zbir pomal ili ednakov od 5: %d", neparni);

    return 0;
}