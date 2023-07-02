//
// Created by ivasp on 1/19/2023.
//Од стандарден влез се чита цел број N (N<100) и потоа N низи од знаци.
//Низите знаци содржат букви, цифри и специјални знаци, а секоја од нив не е поголема од 50 знаци.
//Да се напише програма што ќе ги отпечати на екран сите низи од знаци во кои се содржи поднизата А1c
//најмалку 2 пати (пр. A1c01АA1c92, 12A1cwwA1cxy, аA1cwA1cA1ccA1cxab) според редоследот како што се прочитани од влезот.
//При печатење на зборовите, сите алфабетски знаци треба да се испечатат со мали букви.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contains(char *line){
    int counter=0;
    char substring[]="a1c";
    int nLine= strlen(line);
    int nSubstring= strlen(substring);
    for(int i=0;i<=(nLine-nSubstring);i++){
        if(strncmp(substring+i,line,nSubstring)==0)
            ++counter;
    }
    return counter;
}

int main(){
    int n;
    scanf("%d\n",&n);

    char line[51];
    for(int i=0;i<n;i++){
        scanf("%s",line);
        for(int j=0;j<strlen(line);j++){
            line[j]=tolower(line[j]);
        }
        if(contains(line)>=2){
            puts(line);
        }
    }

    return 0;
}













/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contains(char *a){
    int counter=0;
    char podniza[]="a1c";
    int nNiza=strlen(a);
    int nPodniza=strlen(podniza);

    for(int i=0;i<=(nNiza-nPodniza);i++){
        if((strncmp(podniza,a+i,nPodniza))==0){
            counter++;
        }
    }
    return counter;
}

int main(){
    int n;
    scanf("%d",&n);

    char niza[51];
    for(int i=0;i<n;i++){
        scanf("%s",niza);
        for(int j=0;j<strlen(niza);j++){
            if(isalpha(niza[j]) && isupper(niza[j])){
                niza[j]=tolower(niza[j]);
            }
        }
        if(contains(niza)>=2){
            puts(niza);
        }
    }

    return 0;
}*/