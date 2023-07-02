//
// Created by ivasp on 1/18/2023.
//Во дадена датотека “broevi.txt” се запишани повеќе редови со броеви така што секој ред започнува
//со еден цел број (N>=1) што означува колку броеви следуваат по него во тој ред.
//Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра.
//Читањето на броеви завршува кога ќе се прочита 0.

#include <stdio.h>
#include <math.h>

int najznacajnaCifra(int broj){
    while(broj>9){
        broj/=10;
    }
    return broj;
}

int main(){
    FILE *f= fopen("C:\\Users\\ivasp\\CLionProjects\\SP\\vtorKolokvium\\broevi.txt","r");

    int n;
    int broj;
    while(1){
        fscanf(f,"%d",&n);
        if(n==0) break;
        int max=0;
        int maxBroj;
        for(int i=0;i<n;i++){
            fscanf(f,"%d",&broj);

            if(najznacajnaCifra(broj)>max){
                max=najznacajnaCifra(broj);
                maxBroj=broj;
            }
        }
        printf("%d\n",maxBroj);
    }

    return 0;
}