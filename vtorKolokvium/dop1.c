//
// Created by ivasp on 1/19/2023.
//Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци.
//Низите знаци содржат букви, цифри и специјални знаци (без знаци за празно место), а секоја од нив не е подолга од 80 знаци.
//Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа,
//којашто е палиндром (се чита исто од од лево на десно и од десно на лево) и што содржи барем еден специјален знак.
//Ако нема такви низи, се печати "Nema!". Ако има две или повеќе низи што го задоволуваат овој услов,
//се печати првата низа којашто го задоволува условот.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void clearString(char *a){
    a[strlen(a)-1]='\0';
}

int contains(char *a){
    int counter=0;
    for(int i=0;i<strlen(a);i++){
        if(!isalnum(a[i])){
            counter++;
        }
    }
    return counter;
}

int isPalindrome(char *a){
    int n=strlen(a);
    for(int i=0;i<n/2;i++){
        if(a[i]!=(a[n-i-1])){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d\n",&n);
    char niza[81], maxniza[81];
    int flag=1;
    for(int i=0;i<n;i++){
        fgets(niza,100,stdin);
        clearString(niza);
        if(isPalindrome(niza) && contains(niza)){
            if(flag){
                strcpy(maxniza,niza);
                flag=0;
            }

            if(strlen(maxniza)<strlen(niza)){
                strcpy(maxniza,niza);
            }
        }
    }

    if(!flag) printf("%s",maxniza);
    else printf("Nema!");
    return 0;
}