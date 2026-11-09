#include <stdio.h>
#define n 5

int stack1[n], stack2[n];
int top1 = -1, top2 = -1;

void enqueue(int val){
    if (top1 == n - 1){
        printf("Queue overflow\n");
        return;
    }

    stack1[++top1] = val;
}

void transfer(){
    while (top1 != -1)
        stack2[++top2] = stack1[top1--];
}

void dequeue(){
    if (top1 == -1 && top2 == -1){
        printf("Queue underflow\n");
        return;
    }

    if (top2 == -1)
        transfer();

    printf("Deleted: %d\n", stack2[top2--]);
}

void peek(){
    if (top1 == -1 && top2 == -1){
        printf("Queue empty\n");
        return;
    }

    if (top2 == -1)
        transfer();

    printf("Front: %d\n", stack2[top2]);
}

void display(){
    if (top1 == -1 && top2 == -1){
        printf("Queue empty\n");
        return;
    }

    for (int i = top2; i >= 0; i--)
        printf("%d ", stack2[i]);

    for (int i = 0; i <= top1; i++)
        printf("%d ", stack1[i]);

    printf("\n");
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();
    peek();
    dequeue();
    display();

    return 0;
}