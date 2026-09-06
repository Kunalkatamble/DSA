#include <stdio.h>

int main(){
    int a[5]={1,2,3,4,5};
    int max=a[0];
    for(int i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("max value is %d",max);
    return 0;
}