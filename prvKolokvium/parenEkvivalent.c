//
// Created by ivasp on 11/13/2022.
//Од тастатура се читаат 2 позитивни цели броеви.
//Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.
//Треба да се определи дали помалиот број е „парен еквивалент“ од поголемиот број.
//Еден број е „парен еквивалент“ на друг број, ако и само ако неговите цифри се наоѓаат на парните позиции од другиот број, во истиот редослед.
//Соодветно да се испечатат пораки „PAREN“ и „NE“
//Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)
//12345678 1357 PAREN

#include <stdio.h>
int parenEkvivalent(int broj){
    int br=0;
    int promenliva=broj;
    while(promenliva){
        br++;
        promenliva/=10;
    }

    int paren=0;
    int koeficient=1;
    for(int i=1;i<=br;i++){
        int cifra=broj%10;
        if(i%2==0){
            paren+=koeficient*cifra;
            koeficient*=10;
        }
        broj/=10;
    }
    return paren;
}

/*int obratenBroj(int x){
    int obraten=0;
    while(x){
        int cifra=x%10;
        obraten=10*obraten+cifra;
        x/=10;
    }
    return obraten;
}*/

int main(){
    int x,y;
    scanf("%d %d", &x,&y);
    if(x<=0 || y<=0){
        printf("Invalid input");
        return 0;
    }

    if(y>x){
        int tmp=x;
        x=y;
        y=tmp;
    }

    //int paren=parenEkvivalent(pogolem);
    printf("%d\n", parenEkvivalent(x));
    //if(pomal==obratenBroj(paren))
    if(y== parenEkvivalent(x))
        printf("PAREN");
    else printf("NE");

    return 0;
}