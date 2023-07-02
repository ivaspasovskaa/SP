//
// Created by ivasp on 11/13/2022.
//Од тастатура се читаат непознат број позитивни цели броеви (со максимум 5 цифри) се додека не се внесе нешто различно од број.
//За секој број треба да се најде позицијата (од десно на лево) на првото појавување на најголемата цифра во составот на бројот
//(цифрата на единици се наоѓа на позиција 0). Потоа, да се испечати статистика за позициите на најдените цифри со максимална вредност
//[позиција]: [вкупно броеви чија максимална цифра се наоѓа на таа позиција]

#include <stdio.h>

int pozicijaMaxCifra(int x){
    int pozicija=0, pozMax=0;
    int max=x%10;
    while(x){
        if((x%10)>max){
            max=x%10;
            pozMax=pozicija;
        }
        pozicija++;
        x/=10;
    }

    return pozMax;
}

int main(){
    int n;
    int nulta=0, prva=0, vtora=0, treta=0, cetvrta=0;

    while(scanf("%d",&n)){

        if(n>100000) continue;

        switch (pozicijaMaxCifra(n)) {
            case 0: nulta++; break;
            case 1: prva++; break;
            case 2: vtora++; break;
            case 3: treta++; break;
            case 4: cetvrta++; break;
        }
    }

    printf("0: %d\n",nulta);
    printf("1: %d\n",prva);
    printf("2: %d\n",vtora);
    printf("3: %d\n",treta);
    printf("4: %d\n",cetvrta);

    return 0;
}