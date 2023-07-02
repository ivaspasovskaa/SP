//
// Created by ivasp on 11/23/2022.
//
//slicni broevi 45 i 8 e 48

#include <stdio.h>

int slichen(int n, int x){
    int brx=0;
    int tmp=x;
    while(tmp){
        brx++;
        tmp/=10;
    }

    int br=0;
    for(int i=n;i>0;i--){
        int cifraN=n%10;
        int temp=x;
        while(temp){
            int cifraX=temp%10;
            if(cifraX==cifraN) {
                br++;
            }
            temp/=10;
        }
        n/=10;
    }

    if(brx==br) return 1;
    else return 0;
}

int main(){
    int n,x;
    scanf("%d %d", &n,&x);
    if(n<=0 || x<=0) return 0;

    for(int i=n+1;;i++){
        if(slichen(i,x)!=0) {
            printf("%d", i);
            break;
        }
    }

    return 0;
}