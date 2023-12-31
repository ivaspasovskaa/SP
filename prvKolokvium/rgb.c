//
// Created by ivasp on 11/23/2022.
//Од тастатура се вчитува природен број N, а потоа се вчитуваат последователно информации за N пиксели.
// За секој пиксел се внесуваат три цели броеви коишто ги претставуваат r, g и b вредностите за соодветниот пиксел.
// Пикселот е валиден ако секоја од внесените r, g и b вредности е во опсег [0, 255].
// Пикселите коишто не се валидни не се земаат во предвид.
//Да се имплементира max rgb филтер, којшто за секој валиден пиксел го наоѓа максимумот од вредностите r, g и b
// и секоја вредност на компонентите на истиот пиксел што е помала од максимумот ја заменува со нула.
// За секој валиден пиксел се печатат новите вредности по извршената трансформација.
//Пример: Влез: 5 200 100 30 255 123 255 100 100 100 300 120 8 40 80 255
//Излез: 200 0 0 255 0 255 100 100 100 0 0 255

#include <stdio.h>

int maxRGB(int r, int g, int b){
    int max=0;
    if(r>max) max=r;
    if(g>max) max=g;
    if(b>max) max=b;
    return max;
}

int main(){
    int n;
    scanf("%d", &n);
    int r,g,b;
    for(int i=0;i<n;i++){
        scanf("%d %d %d", &r, &g, &b);

        if(r<0 || r>255 || g<0 || g>255 || b<0 || b>255) continue;

        if(r==maxRGB(r,g,b)) r=maxRGB(r,g,b);
        else r=0;

        if(g==maxRGB(r,g,b)) g=maxRGB(r,g,b);
        else g=0;

        if(b==maxRGB(r,g,b)) b=maxRGB(r,g,b);
        else b=0;

        printf("%d %d %d ", r,g,b);
    }

    return 0;
}