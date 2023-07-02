//
// Created by ivasp on 11/13/2022.
//Од стандарден влез се чита еден природен број n.
//Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем.
//Во пресметувањето на збирот на делители на даден број, да не се зема предвид самиот број.

#include <stdio.h>

int zbirNaDeliteli(int x){
    int zbir=0;
    for(int i=(x/2);i>0;i--){
        if(x%i==0){
            zbir+=i;
        }
    }
    return zbir;
}

int main(){
    int n,broj=0, max=0;
    scanf("%d",&n);
    for(int i=n-1;i>0;i--){
        if(zbirNaDeliteli(i)>max){
            max=zbirNaDeliteli(i);
            broj=i;
        }
    }
    printf("%d",broj);

    return 0;
}