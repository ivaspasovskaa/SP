//
// Created by ivasp on 1/19/2023.
//Во датотеката podatoci.txt се запишани редови со низи од знаци (секој не подолг од 80 знаци).
//Од стандарден влез се читаат два знака z1 и z2.
//Да се напише програма со која на стандарден излез ќе се испечатат поднизите од секој ред од датотеката
//составени од знаците што се наоѓаат меѓу z1 и z2 (без нив). Секоја подниза се печати во нов ред.
//Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2,
//знакот z1 секогаш се наоѓа пред знакот z2, а меѓу z1 и z2 секогаш има барем еден знак.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE *f=fopen("podatoci.txt","r");

    char z1,z2;
    if((scanf(" %c %c",&z1,&z2))!=2){
        z2=z1;
        z1=' ';
    }

    int ind1,ind2;
    char line[81];
    while((fgets(line,81,f))!=NULL){
        for(int i=0;i<strlen(line);i++){
            if(line[i]==z1){
                ind1=i;
                break;
            }
        }

        for(int i=0;i<strlen(line);i++){
            if(line[i]==z2){
                ind2=i;
                break;
            }
        }

        for(int i=ind1+1;i<ind2;i++){
            printf("%c",line[i]);
        }
        printf("\n");
    }

    fclose(f);
    return 0;
}