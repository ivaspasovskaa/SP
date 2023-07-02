//
// Created by ivasp on 11/13/2022.
//Од стандарден влез се читаат непознат број на хексадецимални цифри се додека не се внесе точка (.)
//Ваша задача е да го пресметате декадниот збир на внесените хексадецимални цифри
//Доколку добиениот декаден збир е делив со 16 се печати Pogodok
//Доколку истиот тој збир покрај што е делив со 16 плус завршува на 16 (последните цифри му се 1 и 6)
//се печати Poln pogodok, инаку се печати самиот збир

#include <stdio.h>

int main(){
    char broj;
    int zbir=0;
    while(broj!='.'){
        scanf("%c",&broj);
        if(broj>='0' && broj<='9') zbir+=broj-'0';
        if(broj>='a' && broj<='f') zbir+=broj-'a'+10;
        if(broj>='A' && broj<='F') zbir+=broj-'A'+10;
    }

    if(zbir%16==0 && (zbir%10==6 && zbir/10%10==1)) printf("Poln pogodok");
    else if(zbir%16==0) printf("Pogodok");
    else printf("%d", zbir);

    return 0;
}