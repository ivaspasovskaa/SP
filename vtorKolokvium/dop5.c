//
// Created by ivasp on 1/19/2023.
//Еден елемент се заматува ако се најде аритметичка средина на елементот и сите негови соседи.
//Сосед на еден елемент се сите елементи кои припаѓаат на матрицата и се околу истиот елемент (хоризонтално, вертикално и дијагонално).
//Во датотеката input.txt е сместена матрица од реални броеви (3 < n,m < 50).
//Во првиот ред се дефинирани бројот на редици и колони на матрицата и во секој преостанат ред е внесен еден ред од матрицата (види пример).
//По читањето на матрицата, од стандарден влез се внесуваат и 2 пара координати на матрицата (ред и колона)
//кои го репрезентираат горниот-лев и долниот-десен елемент од регионот.
//Потребно е да генеирате нова матрица во која ќе ги заматите сите елементи кои припаѓаат на регионот.
//Новодобиената матрица, во истиот формат, треба да се запише во датотеката output.txt.

#include <stdio.h>

int main(){
    FILE *f1=fopen("input.txt","r");
    FILE *f2=fopen("output.txt","w");

    int m,n;
    fscanf(f1,"%d %d",&m,&n);

    float matrica[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            fscanf(f1,"%f",&matrica[i][j]);
        }
    }

    int x1,x2,y1,y2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

    float m1[100][100];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            m1[i][j]=matrica[i][j];
            if(i>=x1 && i<=x2 && j>=y1 && j<=y2){
                float zbir=0,elementi=0;
                for(int x=i-1;x<=i+1;x++){
                    for(int y=j-1;y<=j+1;y++){
                        if(x<0 || x>=m || y<0 || y>=n) continue;
                        else{
                            zbir+=matrica[x][y];
                            ++elementi;
                        }
                    }
                }
                m1[i][j]=zbir/elementi;
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            fprintf(f2,"%.2lf ",m1[i][j]);
        }
        fprintf(f2,"\n");
    }
    fclose(f1);
    fclose(f2);

    return 0;
}


//authors answers
/*#include <stdio.h>

void printFile() {

    FILE *f=fopen("output.txt","r");
    char line[1000];
    while(!feof(f)){
        fgets(line,1000,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

void wtf(){
    FILE *f=fopen("input.txt","w");

    int row,column,i,j;
    float el;
    scanf("%d %d", &row, &column);

    fprintf(f,"%d %d\n",row, column);

    for (i=0; i<row; ++i){
        for (j=0; j<column; ++j){
            scanf("%f", &el);
            fprintf(f, "%.2f ", el);
        }
        fputc('\n',f);
    }
    fclose(f);

    return;
}

#include <stdio.h>

int main(){
    wtf();
    FILE *f1=fopen("input.txt","r");
    FILE *f2=fopen("output.txt","w");

    int m,n;
    fscanf(f1,"%d %d\n",&m,&n);

    float a[51][51];
    float b[51][51];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            fscanf(f1,"%f",&a[i][j]);
            b[i][j]=a[i][j];
        }
    }

    int x1,x2,y1,y2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

    for(int i=x1;i<=x2;i++){
        for(int j=y1;j<=y2;j++){
            int counter=0;
            if(i==0 && j==0){
                b[i][j]+=a[i+1][j]+a[i][j+1]+a[i+1][j+1];
                counter=4;
            }

            else if(i==0 && j==n-1){
                b[i][j]+=a[i+1][j]+a[i][j-1]+a[i+1][j-1];
                counter=4;
            }

            else if(i==m-1 && j==0){
                b[i][j]+=a[i-1][j]+a[i][j+1]+a[i-1][j+1];
                counter=4;
            }

            else if(i==m-1 && j==n-1){
                b[i][j]+=a[i-1][j]+a[i][j-1]+a[i-1][j-1];
                counter=4;
            }

            else if(i==0){
                b[i][j]+=a[i+1][j]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j+1];
                counter=6;
            }

            else if(i==m-1){
                b[i][j]+=a[i-1][j]+a[i][j-1]+a[i][j+1]+a[i-1][j-1]+a[i-1][j+1];
                counter=6;
            }

            else if(j==0){
                b[i][j]+=a[i-1][j]+a[i+1][j]+a[i][j+1]+a[i-1][j+1]+a[i+1][j+1];
                counter=6;
            }

            else if(j==n-1){
                b[i][j]+=a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i-1][j-1]+a[i+1][j-1];
                counter=6;
            }

            else{
                b[i][j]+=a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1]+
                         a[i-1][j-1]+a[i-1][j+1]+a[i+1][j-1]+a[i+1][j+1];
                counter=9;
            }
            b[i][j]/=counter;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            fprintf(f2,"%.2f ",b[i][j]);
        }
        fprintf(f2,"\n");
    }
    fclose(f1);
    fclose(f2);

    printFile();

    return 0;
}*/