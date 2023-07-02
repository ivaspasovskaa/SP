//
// Created by ivasp on 11/24/2022.
//Од тастатура се внесуваат два цели броеви X и N. Пoтоа од тастатура се внесуваат уште N природни броеви поголеми од 9.
//Секој внесен број да се трансформира во број којшто е добиен со преместување на неговата најзначајна (прва) цифра на крајот од бројот.
//Потоа да се провери дали Х е делител на добиениот број и на екран да се испечати DA ако е делител и NE во спротивно
// (за секој број во посебен ред).
//(Пример за преместување на најзначајната (прва) цифра на крај на број: 1234 -> 2341, 10 -> 1, 200 -> 2 )
//Пр. Влез 2 2 43 100
//Излез DA NE
//(Објаснување за примерот: 43 -> 34, 2 e делител на 34 100 -> 1, 2 НЕ е делител на 1 )

#include <stdio.h>
#include <math.h>

int novBroj(int n){
    int br=0;
    int temp=n;
    while(temp){
        br++;
        temp/=10;
    }

    int premesten=n/(pow(10,(br-1)));
    int nov=0;
    int k=1;
    while(n>9){
        int cifra=n%10;
        nov+=k*cifra;
        k*=10;
        n/=10;
    }

    nov = 10 * nov + premesten;

    return nov;
}

int main(){
    int n,x;
    scanf("%d %d", &x,&n);

    int broj;
    for(int i=1;i<=n;i++){
        scanf("%d",&broj);

        if(broj<=9) return 0;
        //printf("%d\n", novBroj(broj));
        if(novBroj(broj)%x==0) printf("DA\n");
        else printf("NE\n");
    }

    return 0;
}