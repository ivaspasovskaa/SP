//
// Created by ivasp on 11/24/2022.
//Од тастатура се вчитува природен број N, а потоа се вчитуваат последователно N тројки цели броеви (a, b, c).
// Нека за секоја тројка цели броеви a, b и c се дефинира вредност s што се пресметува по следната формула:
//s = max/2 + 3*max - max^2
//каде што max е најголемиот од броевите a, b, c.
//На излез да се испечати вредноста s за секоја од тројките броеви и на крај повторно најголемата добиена вредност за s

/*#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int a,b,c;
    float sMax;
    for(int i=0;i<n;i++){
        scanf("%d %d %d", &a,&b,&c);

        int max=a;
        if(b>max) max=b;
        if(c>max) max=c;

        float s=max/2.0 +3*max -max*max;
        printf("%.1f\n", s);

        if(i==0) sMax=s;
        if(s>sMax) sMax=s;
    }

    printf("Najgolema: %.1f", sMax);

    return 0;
}*/

//Од тастатура се вчитува природен број N, а потоа се вчитуваат последователно N тројки цели броеви (a, b, c).
// Нека за секоја тројка цели броеви a, b и c се дефинира вредност rez што се пресметува според следната формула:
//rez = 2*min – max/2 + |min - a|
//кадешто min е најмалиот број од тројката, а max - најголемиот број од тројката броеви a, b, c.
//На излез да се испечати вредноста rez за секоја од тројките броеви, во посебни редови, според форматот во примерот.
//Пр. Влез: 2 5 1 5 2 -10 6
//Излез: 3.50 -11.00

#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    int a,b,c;
    for(int i=0;i<n;i++){
        scanf("%d %d %d", &a,&b,&c);

        int min=a;
        if(b<min) min=b;
        if(c<min) min=c;

        int max=a;
        if(b>max) max=b;
        if(c>max) max=c;

        float rez = 2*min- max/2.0 + abs(min-a);
        printf("%.2f ", rez);
    }

    return 0;
}