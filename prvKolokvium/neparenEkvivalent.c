//
// Created by ivasp on 11/21/2022.
//5094 parni: 9+5=14 neparni 4+0=4
#include <stdio.h>

int neparenEkvivalent(int x){
    int br=0;
    int temp=x;
    while(temp){
        br++;
        temp/=10;
    }

    int neparen=0;
    int k=1;
    for(int i=1;i<=br;i++){
        int m=x%10;
        if(i%2==1){
            neparen+=m*k;
            k*=10;
        }
        x/=10;
    }
    return neparen;
}

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    if(a<=0 || b<=0){
        printf("Invalid input");
        return 0;
    }

    if(b>a){
        int tmp=a;
        a=b;
        b=tmp;
    }

    if(neparenEkvivalent(a)==b) printf("DA");
    else printf("NE");

    return 0;
}