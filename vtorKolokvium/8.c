//
// Created by ivasp on 1/19/2023.
//Во дадена датотека dat.txt да се најде најдолгиот ред во кој има барем 2 цифри.
//На стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу
//првата и последната цифра (заедно со тие 2 цифри) во истиот редослед.
//Доколку има повеќе такви редови се печати последниот.
//Се претпоставува дека ниту еден ред на датотеката не е подолг од 100 знаци.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int counter(char *line){
    int c=0;
    for(int i=0;i< strlen(line);i++){
        if(isdigit(line[i])){
            ++c;
        }
    }
    return c;
}

int main(){
    FILE *f=fopen("dat.txt","r");

    char line[101],maxLine[101];
    fgets(line,101,f);
    strcpy(maxLine,line);

    while((fgets(line,101,f))!=NULL){
        if(counter(line)>=2){
            if(strlen(maxLine)<= strlen(line)){
                strcpy(maxLine,line);
            }
        }
    }

    int start,end;
    for(int i=0;i<strlen(maxLine);i++){
        if(isdigit(maxLine[i])){
            start=i;
            break;
        }
    }

    for(int i=strlen(maxLine);i>=0;i--){
        if(isdigit(maxLine[i])){
            end=i;
            break;
        }
    }

    for(int i=start;i<=end;i++){
        printf("%c",maxLine[i]);
    }


    fclose(f);

    return 0;
}