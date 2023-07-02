//
// Created by ivasp on 1/21/2023.
//
#include <stdio.h>

int main(){
    FILE *f= fopen("C:\\Users\\ivasp\\CLionProjects\\SP\\vtorKolokvium\\vlezna.txt","r");
    int m,n;
    fscanf(f,"%d%d",&m,&n);

    int a[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            fscanf(f,"%d",&a[i][j]);
        }
    }

    fclose(f);

    float result[100][100];
    int p,q;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            float sum=0;
            int counter=0;

            //gore levo
            for(p=i-1,q=j-1;p>=0 && q>=0;p--,q--){
                sum+=a[p][q];
                ++counter;
            }

            //gore desno
            for(p=i-1,q=j+1;p>=0 && q<n;p--,q++){
                sum+=a[p][q];
                ++counter;
            }

            //dole levo
            for(p=i+1,q=j-1;p<m && q>=0;p++,q--){
                sum+=a[p][q];
                ++counter;
            }

            //dole desno
            for(p=i+1,q=j+1;p<m && q<n;p++,q++){
                sum+=a[p][q];
                ++counter;
            }

            result[i][j]=sum/counter;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%.2f ",result[i][j]);
        }
        printf("\n");
    }


    return 0;
}