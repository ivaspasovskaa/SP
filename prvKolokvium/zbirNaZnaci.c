//
// Created by ivasp on 11/13/2022.
//Од стандарден влез се читаат знаци се додека не се прочита извичник
//Во вака внесениот текст се скриени броеви (помали од 100)
//Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот

#include <stdio.h>

int main(){
    char znak;
    int zbir=0;
    int promenliva=0;
    while(znak!='!'){
        scanf("%c", &znak);
        if(znak>='0' && znak<='9'){
            promenliva=10*promenliva+(znak-'0');
        }

        else{
            zbir+=promenliva;
            //printf("%d ", promenliva);
            promenliva=0;
            }
        }
    printf("%d\n", zbir+promenliva);

    return 0;
}