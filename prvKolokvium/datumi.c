//
// Created by ivasp on 11/25/2022.
//Од стандарден влез се чита еден број кој претставува датум во формат DDMMYYYY
//(DD-ден, MM-месец, YYYY-година) кој го означува денешниот датум. Потоа се
//вчитува цел број N, по кој се вчитуваат N датуми на раѓање во дадениот
//формат. За секој од прочитаните N датуми на раѓање треба да се отпечати "DA"
//ако на денешниот ден (вчитан на почетокот) има повеќе или точно 18 години,
//а во спортивно "NE".

#include <stdio.h>

int main(){
    int deneshen;
    scanf("%d",&deneshen);
    int deneshenD=deneshen/1000000;
    int deneshenM=deneshen/10000%100;
    int deneshnaG=deneshen%10000;
    //printf("%d %d %d", deneshenD, deneshenM,deneshnaG);

    int n,datumi;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d", &datumi);

        int denRagjanje=datumi/1000000;
        int mesecRagjanje=datumi/10000%10;
        int godRagjanje=datumi%10000;

        if(godRagjanje<(deneshnaG-18)) {
            printf("DA\n");
        }

        else if(godRagjanje==(deneshnaG-18)){
            if(mesecRagjanje<deneshenM) printf("DA\n");
            else if(mesecRagjanje==deneshenM){
                if(denRagjanje<=deneshenD) printf("DA\n");
                else printf("NE\n");
            }
            else printf("NE\n");
        }
        else printf("NE\n");
    }

    return 0;
}