//
// Created by ivasp on 1/15/2023.
//Во eдна датотека vlezna.txt се запишани низи од знаци (содржат букви, цифри и специјални знаци),
//секоја во посебен ред. Низите знаци, секоја за себе, не е поголема од 80 знаци.
//Да се напише програма со која на стандарден излез ќе го отпечати редот со најголем број знаци,
//што содржи само букви или само цифри. Ако нема такви редови, се печати "Nema!".
//Ако има два или повеќе реда што го задоволуваат овој услов, се печати првиот ред што го задоволува условот.
//Пример:
//Влез:
//Kfd?vsvv985%vdvfb
//Ccsvsdvdfv
//342425vbbcb
//352!235325
//gdg??dfg!!
//5336346644747
//8338736767867
//Излез:
//5336346644747

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void clearString(char *line){
    line[strlen(line)-1]='\0';
}
//moj nacin
int samoBukviSamoZnaci(char *line){
    int bukvi=0,brojki=0;
    for(int i=0;i< strlen(line);i++){
        if(!isalnum(line[i])) return 0;
        if(isalpha(line[i])) bukvi++;
        if(isdigit(line[i])) brojki++;
    }

    if(bukvi==strlen(line) || brojki==strlen(line)) return 1;
    else return 0;
    //return bukvi==strlen(line) || brojki==strlen(line)
}

//stefan
/*
int samoBukviSamoZnaci(char *line){
    char first=line[0];
    if(isalpha(first)){
        for(int i=1;i< strlen(line);i++){
            if(!isalpha(line[i])) return 0;
        }
    }
    else if(isdigit(first)){
        for(int i=1;i< strlen(line);i++){
            if(!isdigit(line[i])) return 0;
        }
    }
    else return 0;

    return 1;
}*/

int main(){
    FILE *f=fopen("C:\\Users\\ivasp\\CLionProjects\\SP\\vtorKolokvium\\vlezna.txt","r");

    char line[81];

    int counter=0;
    int flag=1;
    char maxLine[81];
    while((fgets(line,81,f))!=NULL){
        clearString(line);
        if(samoBukviSamoZnaci(line)){
            ++counter;
            if(flag){
                strcpy(maxLine,line);
                flag=0;
            }

            if(strlen(maxLine)<strlen(line)){
                strcpy(maxLine,line);
            }
        }
    }

    if(counter) printf("%s",maxLine);
    else printf("Nema");

    fclose(f);

    return 0;
}