//
// Created by ivasp on 11/16/2022.
//
#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    char karta;
    int k=0;
    int zbir1=0, zbir2=0, milan=0, marko=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            scanf("%c ",&karta);
            if(karta=='J') k=12;
            else if(karta=='Q') k=13;
            else if(karta=='K') k=14;
            else if(karta=='A') k=15;
            else printf("Invalid input");
            if(j<2){
                zbir1+=k;
            }
            else zbir2+=k;
        }
        if(zbir1>zbir2){
            printf("Milan\n");
            milan++;
        }
        else if(zbir2>zbir1) {
            printf("Marko\n");
            marko++;
        }
        else printf("Neresheno\n");
    }
    printf("%d %d\n", milan, marko);
    printf("%d %d", zbir1, zbir2);

    return 0;
}
