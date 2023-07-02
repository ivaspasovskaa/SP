//
// Created by ivasp on 11/13/2022.
//Од тастатура се внесува број на студенти кои ќе полагаат колоквиум, а потоа и индексите на сите студенти кои ќе полагаат колоквиум.
//Програмата треба да ги подели студентите во три групи: студенти со индекси кои завршуваат на цифрата 0, 1 и 2,
//студенти со индекси кои завршуваат на цифрата 3, 4 и 5 и студенти со индекси кои завршуваат на цифрата 6, 7, 8 и 9.
//Програмата треба да ги испечати индексите за секоја група, во истиот редослед како што биле внесени.
//Максималниот број на студенти што може да се внесат е 1000.

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>1000) {
        printf("Ke se pecatat indeksite do 1000");
        n=1000;
    }

    int indeks[1000],grupa1[1000],grupa2[1000],grupa3[1000];
    int broj,cifra;
    for(int i=0;i<n;i++) {
        scanf("%d", &indeks[i]);
        broj = indeks[i];
        cifra = indeks[i] % 10;

        if (cifra == 0 || cifra == 1 || cifra == 2) grupa1[i] = broj;
        if (cifra == 3 || cifra == 4 || cifra == 5) grupa2[i] = broj;
        if (cifra == 6 || cifra == 7 || cifra == 8 || cifra == 9) grupa3[i] = broj;
        }

    printf("Grupa 1\n");
    for(int i=0;i<n;i++){
        if(grupa1[i]==0){
            grupa1[i]=grupa1[i+1];
        }
        else
        printf("%d ", grupa1[i]);
    }

    printf("\nGrupa 2\n");
    for(int i=0;i<n;i++){
        if(grupa2[i]==0){
            grupa2[i]=grupa2[i+1];
        }
        else
        printf("%d ", grupa2[i]);
    }

    printf("\nGrupa 3\n");
    for(int i=0;i<n;i++){
        if(grupa3[i]==0){
            grupa3[i]=grupa3[i+1];
        }
        else
        printf("%d ", grupa3[i]);
    }

    return 0;
}