//
// Created by ivasp on 1/18/2023.
//Дадена е текстуална датотека (livce.txt) која претставува ливче во спортска обложувалница.
//На почетокот во датотеката, во посебен ред е запишана сумата на уплата (цел број).
//Потоа во секој ред од датотеката е запишан по еден тип во следниот формат:
//ab12 1 1.25
//Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци),
//вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).
//Ваша задача е да се испечати типот со најголем коефициент како и можната добивка на ливчето.
//Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.
//Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.

#include <stdio.h>
#include <string.h>

int main() {
    FILE *f=fopen("livce.txt","r");

    int sumaNaUplata;
    fscanf(f,"%d",&sumaNaUplata);

    char shifra[10],maxShifra[10];
    int tip,maxTip;
    double koeficient,maxKoeficient;
    int flag=1;
    double moznaDobivka=1;
    while((fscanf(f,"%s %d %lf",shifra,&tip,&koeficient))!=EOF){
        moznaDobivka*=koeficient;
        if(flag){
            strcpy(maxShifra,shifra);
            maxTip=tip;
            maxKoeficient=koeficient;
            flag=0;
            continue;
        }

        if(koeficient>maxKoeficient){
            strcpy(maxShifra,shifra);
            maxTip=tip;
            maxKoeficient=koeficient;
        }


    }
    printf("%s %d %.2lf\n%.2lf",maxShifra,maxTip,maxKoeficient,moznaDobivka*sumaNaUplata);

    return 0;

}