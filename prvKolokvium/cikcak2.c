//
// Created by ivasp on 11/23/2022.
//Цик-цак е број за кој важи дека за секој пар соседни цифри во бројот важи дека едната е помала од 5,
// а другата е поголема или еднаква на 5. На пример, ако бројот x е составен од цифрите a, b, c и d,
// тогаш за нив важи:     a<5, b>=5, c<5, d>=5 или a>=5, b<5, c>=5, d<5
//Пр.  508294, 2638, 81
//Од тастатура се читаат непознат број на цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат).
// Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви

#include <stdio.h>

int cikCak(int x){
    int flag=1;
    int posledna, pretposledna, pretpretposledna;

    if(x>9 && x<100){
        posledna=x%10;
        pretposledna=x/10%10;
        if((posledna<5 && pretposledna>=5) || (posledna>=5 && pretposledna<5))
            return flag;

        else{
            flag=0;
            return flag;
        }
    }

    while(x>99){
        posledna=x%10;
        pretposledna=x/10%10;
        pretpretposledna=x/100%10;

        if((posledna<5 && pretposledna>=5 && pretpretposledna<5) || (posledna>=5 && pretposledna<5 && pretpretposledna>=5))
            x/=10;

        else{
            flag=0;
            break;
        }
    }
    return flag;
}

int main(){
    int broj;

    while(scanf("%d", &broj)){

        if(broj<10) continue;

        if(cikCak(broj)){
            printf("%d\n", broj);
        }

    }

    return 0;
}