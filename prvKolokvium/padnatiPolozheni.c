//
// Created by ivasp on 11/14/2022.
//Од тастатура се внесува колку студенти полагале колоквиум и потоа се внесуваат поените на сите кои полагале.
// Програмата треба да отпечати средна вредност на поените на сите студенти кои имале помалку од 50 поени,
// како и список на студентите со повеќе од 50 поени. Исто така програмата да отпечати средна вредност на
// поените на сите кои положиле со најмалку 50 поени и нивните освоени поени
//(редоследот на печатење во двата случаеви треба да биде ист како и редоследот на внесување).
//Максималниот број на студенти што може да се внесат е 1000.

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if (n>1000) return 0;
    int poeni[1000], padnati[1000], polozheni[1000];
    int padnati1=0,polozheni1=0, brPadnati=0, brPolozheni=0;

    for(int i=0;i<n;i++){
        padnati[i]=-1;
        polozheni[i]=-1;
    }

    for(int i=0;i<n;i++){
        scanf("%d", &poeni[i]);
        if(poeni[i]<50){
            padnati1+=poeni[i];
            padnati[i]=poeni[i];
            brPadnati++;
        }
        else {
            polozheni1+=poeni[i];
            polozheni[i]=poeni[i];
            brPolozheni++;
        }
    }
    printf("Sredna vrednost na padnati %.2f\n", (float)padnati1/brPadnati);
    for(int i=0;i<n;i++){
        if(padnati[i]==-1) padnati[i]=padnati[i+1];
        else printf("%d ", padnati[i]);
    }
    printf("\n");
    printf("Sredna vrednost na polozeni %.2f\n", (float)polozheni1/brPolozheni);
    for(int i=0;i<n;i++){
        if(polozheni[i]==-1) polozheni[i]=polozheni[i+1];
        else printf("%d ", polozheni[i]);
    }

    return 0;
}