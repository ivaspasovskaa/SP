//
// Created by ivasp on 11/25/2022.
//Од тастатура се внесува цел број m, а потоа непознат број цели броеви. Да се
//испечатат должините на секвенците составени од најмалку два
//последователни броја за кои истовремено важи:
//• следниот број е строго поголем од претходниот и
//• секој од нив има точно m цифри.
//Задачата да се реши без користење на низи.

#include <stdio.h>

int main(){
    int m, broj;
    scanf("%d",&m);

    int n=1;
    int first=1, prv, prvBr;
    while(scanf("%d", &broj)){
        int br=0;
        int temp=broj;
        while(temp){
            br++;
            temp/=10;
        }

        if(first){
            first=0;
        }
        else{
            if(broj>prv && prvBr==m && br==m) n++;
            else{
                if(n>=2) printf("%d ",n);
                n=1;
            }
        }
        prv=broj;
        prvBr=br;
    }
    if(n>=2) printf("%d",n);

    return 0;
}