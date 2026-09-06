#include <stdio.h>

void main(){
    int a[6]={1,2,4,5};

    printf("before insertion: ");
    for(int i=0; i<5; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    
    int pos = 2;
    int val = 3;
    for(int i=5; i>=pos; i--){
        a[i]=a[i-1];
    }

    a[pos]=val;

    printf("after insertion: ");
    for(int i=0; i<6; i++){
        printf("%d ",a[i]);
    }

    printf("\n");
}