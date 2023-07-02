//
// Created by ivasp on 11/13/2022.
//Да се напише програма во која од стандарден влез прво се внесува еден позитивен цел број z,
//а потоа последователно се внесуваат парови цели броеви (a,b).
//Внесувањето на парови цели броеви треба да заврши кога корисникот ќе внесе парот (0,0).
//Треба да се пресмета колку пати z е еднаков на збирот на секој внесен пар броеви a и b,
//како и колкав процент од вкупниот број внесени парови (a,b) даваат збир z

#include <stdio.h>

int main(){
    int z,a,b;
    scanf("%d",&z);

    int ednakov=0,brNaParovi=0;
    while(scanf("%d %d",&a,&b)){
        if(a==0 && b==0) break;
        if(z==a+b) ednakov++;
        brNaParovi++;
    }

    printf("Vnesovte %d parovi od broevi chij zbir e %d\n",ednakov,z);
    printf("Procentot na parovi so zbir %d e %.2f%%",z,(float)ednakov*100/brNaParovi);

    return 0;
}