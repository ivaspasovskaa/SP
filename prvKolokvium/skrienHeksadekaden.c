//
// Created by ivasp on 12/14/2022.
//
#include <stdio.h>

int main(){
    char c;
    int dek=0;
    while((c=getchar())!='\n'){
        if((c>='0' && c<='9') || (c>='A' && c<='F')){
            printf("%c",c);
            dek*=16;
            if(c>='A' && c<='F') dek+=c-'A'+10;
            else dek+=c-'0';
        }
    }
    printf(" %d", dek);

    return 0;
}
