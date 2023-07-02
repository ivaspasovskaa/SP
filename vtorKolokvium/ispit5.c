//
// Created by ivasp on 1/21/2023.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void clearString(char *a){
    a[strlen(a)-1]='\0';
}

int occurres(char *line, char c){
    int counter=0;
    for(int i=0;i<strlen(line);i++){
        if(line[i]==c)
            ++counter;
    }
    return counter;
}

int main(){
    char c;
    scanf("%c\n",&c);
    int x;
    scanf("%d\n",&x);

    char line[101];

    char max1[101],max2[101],max3[101];
    int flag1=1,flag2=1,flag3=1;
    while(fgets(line,sizeof(line),stdin)){
        clearString(line);
        if(strcmp(line,"#")==0) break;
        if(occurres(line,c)==x){
            if(flag1){
                strcpy(max1,line);
                flag1=0;
            }
            else if(flag2){
                if(strlen(max1)<strlen(line)){
                    strcpy(max2,max1);
                    strcpy(max1,line);
                }
                else{
                    strcpy(max2,line);
                }
                flag2=0;
            }
            else if(flag3){
                if(strlen(max1)<strlen(line)){
                    strcpy(max3,max2);
                    strcpy(max2,max1);
                    strcpy(max1,line);
                }
                else if(strlen(max2)<strlen(line)){
                    strcpy(max3,max2);
                    strcpy(max2,line);
                }
                else{
                    strcpy(max3,line);
                }
                flag3=0;
            }

            else{
                if(strlen(max1)<strlen(line)){
                    strcpy(max3,max2);
                    strcpy(max2,max1);
                    strcpy(max1,line);
                }
                else if(strlen(max2)<strlen(line)){
                    strcpy(max3,max2);
                    strcpy(max2,line);
                }
                else if(strlen(max3)<strlen(line)){
                    strcpy(max3,line);
                }
            }
        }
    }

    if(!flag1){
        printf("%s\n",max1);
    }
    if(!flag2){
        printf("%s\n",max2);
    }
    if(!flag3){
        printf("%s\n",max3);
    }

    return 0;
}