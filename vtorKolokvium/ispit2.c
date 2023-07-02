//
// Created by ivasp on 1/20/2023.
//
#include <stdio.h>

int findLargest(int *a,int n){
    int maxNumber;
    int maxIndex=-1;
    for(int i=1;i<n-1;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            if(maxIndex == -1 || a[i] > maxNumber){
                maxIndex=i;
                maxNumber=a[i];
            }
        }
    }
    return maxIndex;
}

int main(){
    int n;
    scanf("%d",&n);

    int niza[100];
    for(int i=0;i<n;i++) scanf("%d",&niza[i]);

    int index=findLargest(niza,n);

    if(index==-1) printf("No element match the criteria");
    else printf("%d",niza[index]);

    return 0;
}