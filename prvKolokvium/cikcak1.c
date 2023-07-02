//
// Created by ivasp on 11/14/2022.
//Цик-цак е број за кој што важи дека за секој пар соседни цифри, тие се наизменично поголеми односно помали една во однос на друга.
// На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:
//a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e
//Пр. 343, 4624, 6231209
//Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат).
// Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.

#include <stdio.h>

int cikCak(int x){
    int flag=1;
    int poslednaCifra;
    int pretposlednaCifra;
    int pretpretposledna;

    if(x>9 && x<100){
        poslednaCifra=x%10;
        pretposlednaCifra=x/10%10;
        if(poslednaCifra>pretposlednaCifra || poslednaCifra<pretposlednaCifra)
            return flag;

        else {
            flag=0;
            return flag;
        }
    }

    while(x>99){
        poslednaCifra=x%10;
        pretposlednaCifra=x/10%10;
        pretpretposledna= x/100%10;

        if((poslednaCifra>pretposlednaCifra && pretposlednaCifra<pretpretposledna) || (poslednaCifra<pretposlednaCifra && pretposlednaCifra>pretpretposledna)){
            x/=10;
        }
        else{
            flag=0;
            break;
        }
    }
    return flag;
}

int main(){
    int broj;
    while (scanf("%d", &broj)){
        if(broj<10) continue;

        if (cikCak(broj))
        printf("%d\n",broj);
    }
    return 0;
}