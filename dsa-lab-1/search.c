#include <stdio.h>

int search(){
    int a[5]={1,2,3,4,5};
    int val = 3;
     for (int i = 0; i < 5; i++) {
         if(a[i]==val){
         printf("found at %d", i);
         }
    }
    
}
