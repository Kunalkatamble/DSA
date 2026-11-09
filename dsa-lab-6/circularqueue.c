#include <stdio.h>
#define n 5

int queue[n];
int front = -1, rear = -1;

void enqueue(int val){
    if ((rear + 1) % n == front){
        printf("Queue overflow\n");
        return;
    }

    if (front == -1)
        front = 0;

    rear = (rear + 1) % n;
    queue[rear] = val;
}

void dequeue(){
    if (front == -1){
        printf("Queue underflow\n");
        return;
    }

    printf("Deleted: %d\n", queue[front]);

    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % n;
}

void display(){
    if (front == -1){
        printf("Queue empty\n");
        return;
    }

    int i = front;

    while (1){
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % n;
    }

    printf("\n");
}

void peek(){
    if (front == -1)
        printf("Queue empty\n");
    else
        printf("Front: %d\n", queue[front]);
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();
    peek();
    dequeue();
    display();

    enqueue(40);
    enqueue(50);

    display();

    return 0;
}