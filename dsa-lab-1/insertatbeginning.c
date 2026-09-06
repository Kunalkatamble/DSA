#include <stdio.h>

int main(){
    int a[5] = {0,2,3,4,5};
    a[0]=1;
    for (int i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }

}