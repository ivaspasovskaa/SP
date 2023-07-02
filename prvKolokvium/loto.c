//
// Created by ivasp on 11/22/2022.
//
//loto 7 od 39 joker

#include <stdio.h>

int main(){
    int loto;
    int joker=0;
    for(int i=0;i<7;i++){
        scanf("%d",&loto);
        if(loto<=0 || loto>39) return 0;
        if(i<6) joker=joker*10+(loto%10);
    }

    printf("%d", joker+1);

    return 0;
}