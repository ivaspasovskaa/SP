//
// Created by ivasp on 1/18/2023.
//Да се напише програма во која од дадена датотека со име "input.txt"
//за секој ред ќе се отпечати бројот на цифри во тој ред, знакот :,
//па самите цифри подредени според ASCII кодот во растечки редослед.
//Редовите во датотеката не се подолги од 100 знаци.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void sort(int *niza, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(niza[j]>niza[j+1]){
                swap(&niza[j],&niza[j+1]);
            }
        }
    }
}

int main(){
    FILE *f= fopen("input.txt","r");

    char line[101];
    int niza[100];
    while((fgets(line,101,f))!=NULL){
        int brNaCifri=0;
        for(int i=0;i<strlen(line);i++){
            if(isdigit(line[i])){
                niza[brNaCifri]=(int)(line[i]-'0');
                ++brNaCifri;
            }
        }
        sort(niza,brNaCifri);
        printf("%d:",brNaCifri);
        for(int i=0;i<brNaCifri;i++){
            printf("%d",niza[i]);
        }
        printf("\n");

    }
    fclose(f);

    return 0;
}