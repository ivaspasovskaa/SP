//
// Created by ivasp on 11/23/2022.
//Од тастатура се читаат непознат број цели броеви.
// Читањето завршува во моментот кога ќе се прочита знак што не е цифра.
// Да се испечатат сите броеви кои имаат број на делители еднаков на број на цифри на дадениот број.
//Влез: 11 23 13 45 6789 48 567 34 a
//Излез: 11 23 13

#include<stdio.h>

int brCifri(int x){
    int br=0;
    while(x){
        br++;
        x/=10;
    }
    return br;
}

int brDeliteli(int x){
    int d=0;
    for(int i=1;i<=x;i++){
        if(x%i==0) d++;
    }
    return d;
}

int main() {
    int n;
    while(scanf("%d",&n)){
        if(brCifri(n)==brDeliteli(n)){
            printf("%d\n",n);
        }
    }

    return 0;
}