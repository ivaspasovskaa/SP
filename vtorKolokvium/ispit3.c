//
// Created by ivasp on 1/20/2023.
//
#include <stdio.h>

int main(){
    FILE *f=fopen("input.txt","r");
    int m,n;
    fscanf(f,"%d%d",&m,&n);

    int a[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            fscanf(f,"%d",&a[i][j]);
        }
    }
    fclose(f);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int s1=0,s2=0;
            //na desno
            for(int k=j;k<n;k++){
                s1+=a[i][k];
            }

            //na dole
            for(int k=i;k<m;k++){
                s2+=a[k][j];
            }

            a[i][j]=(s1>s2 ? s1 : s2);
            //if(s1>s2) a[i][j]=s1;
            //else a[i][j]=s2;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}