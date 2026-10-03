#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 100


int stack[MAX];
int top = -1;

int main(){

    char str[MAX];
    int result,a,b;

    printf("Enter prefix expression: ");
    scanf("%s", str);

    for(int i=strlen(str)-1; i >= 0; i--){
        if(isdigit(str[i])){
            stack[++top] = str[i]-'0';

        } else {
           a=stack[top--];
           b=stack[top--];

           switch(str[i]){

            case'+':
                result=a+b;
                break;

            case'-':
                result=a-b;
                break;

            case'*':
                result=a*b;
                break;

            case'/':
                result=a/b;
                break;
           }
           stack[++top]=result;
        }
    }
    printf("%d",result);
}