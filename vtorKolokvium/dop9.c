//
// Created by ivasp on 1/19/2023.
//Од стандарден влез се внесуваат непознат број на реченици претставени преку текстуални низи
//(стрингови) секоја не подолга од 100 знаци и секоја во нов ред.
//Програмата треба да го најде стрингот кој содржи најмногу сврзници и да го испечати заедно со бројот на најдените сврзници.
//За сврзници се сметаат сите зборови составени од една, две или три букви.
//Зборовите во текстуалната низа се одделени со едно или повеќе прaзни места и/или интерпункциски знак.
//Броењето на сврзници во дадена текстуална низа треба да се реализира во посебна функција.
//Решенијата без користење функција ќе бидат оценети со најмногу 40% од поените.
//Ако има повеќе реченици со ист максимален број на сврзници, се печати прво најдената.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void clearString(char *line){
    line[strlen(line)-1]='\0';
}

int brojNaSvrznici(char *line){
    int counter=0;
    int bukvi=0;
    int voString=0;

    for(int i=0;i<strlen(line);i++){
        if(isalpha(line[i])){
            voString=1;
            bukvi++;
            continue;
        }

        if(!isalpha(line[i])){
            voString=0;
            if(bukvi>0 && bukvi<4)
                counter++;
        }
        bukvi=0;
    }

    return counter;
}

int main(){
    char line[101];

    char max[101];
    int maxCounter=0;
    int flag=1;
    while(fgets(line, sizeof(line),stdin)!=NULL){
        clearString(line);
        int counter=brojNaSvrznici(line);
        if(flag){
            strcpy(max,line);
            maxCounter=counter;
            flag=0;
        }

        if(maxCounter<counter){
            strcpy(max,line);
            maxCounter=counter;
        }
    }

    printf("%d:%s",maxCounter,max);

    return 0;
}




/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int brNaSvrznici(char *c){
    int counter=0;
    int bukvi=0;
    int voString;
    for(int i=0;i< strlen(c);i++){
        if(isalpha(c[i])){
            voString=1;
            bukvi++;
            continue;
        }

        if(!isalpha(c[i]) || c[i]=='\0'){
            voString=0;
            if(bukvi>0 && bukvi<=3){
                ++counter;
            }
            bukvi=0;
        }
    }
    return counter;
}

int main(){
    char line[101];
    char max[100];
    fgets(line,100,stdin);
    strcpy(max,line);
    while((fgets(line,100,stdin))!=NULL){
        if(brNaSvrznici(max)<brNaSvrznici(line)){
            strcpy(max,line);
        }
    }
    printf("%d: %s", brNaSvrznici(max), max);

    return 0;
}*/