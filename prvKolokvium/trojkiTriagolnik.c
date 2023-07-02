//
// Created by ivasp on 11/24/2022.
//Од тастатура се внесува цел број n, а потоа и n тројки природни броеви
//(должини на три отсечки). За секоја тројка должини треба да се испечати
//порака Moze ако со нив може да се конструира триаголник, во спротивно се
//печати Ne moze. На крај да се испечати редниот број на тројката броеви со која
//се конструира триаголникот со најголем периметар (се земаат предвид само
//тројките со кои може да се конструира триаголник), како и вредноста на
//најголемиот периметар. Ако постојат повеќе такви тројки броеви, да се
//испечати редниот број на последната. Се смета дека првата внесена тројка е со
//реден број еден, втората со реден број два итн

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a,b,c;
    int pozicija=0, maxpoz=0;
    int perimetar=0;
    for(int i=0;i<n;i++){
        scanf("%d %d %d", &a,&b,&c);
        pozicija++;
        if((a+b>c) && (b+c>a) && (c+a>b)){
            printf("Moze\n");
            if(a+b+c > perimetar){
                perimetar=a+b+c;
                maxpoz=pozicija;
            }
        }
        else printf("Ne moze\n");
    }

    printf("Najgolem perimetar: %d, reden broj: %d", perimetar, maxpoz);

    return 0;
}