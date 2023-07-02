//
// Created by ivasp on 11/13/2022.
//Благ број е број што е составен само од парни цифри (0,2,4,6,8).
//Во зададен опсег (почетокот m и крајот на опсегот n се цели броеви чија вредност се внесува од тастатура).
//Да се најде и испечати најмалиот „благ број“. Ако не постои таков број да се испечати NE.
#include <stdio.h>

int blagBroj(int x){
    while(x){
        int cifra=x%10;
        if(cifra%2!=0){
            return 0;
        }
        x/=10;
    }
    return 1;
}

int main(){
    int m,n;
    scanf("%d %d",&m,&n);

    for(int i=m;i<=n;i++){
        if(blagBroj(i)){
            printf("%d", i);
            return 0;
        }
    }

    printf("NE");
    return 0;
}
