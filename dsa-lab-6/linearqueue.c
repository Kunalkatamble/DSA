#include <stdio.h>
#define n 5

int queue[n];
int front = -1, rear = -1;

// Enqueue
void enqueue(int val){
    if (rear == n - 1){
        printf("Queue overflow\n");
        return;
    }

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = val;

    printf("%d inserted into queue\n", val);
}

// Dequeue
void dequeue(){
    if (front == -1 || front > rear){
        printf("Queue underflow\n");
        return;
    }

    printf("%d deleted from queue\n", queue[front]);

    front++;

    if (front > rear)
        front = rear = -1;
}

// Display
void display(){
    if (front == -1){
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");

    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);

    printf("\n");
}

// Peek
void peek(){
    if (front == -1){
        printf("Queue is empty\n");
        return;
    }

    printf("Front element: %d\n", queue[front]);
}

// Main
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    peek();

    dequeue();

    display();

    enqueue(40);

    display();

    return 0;
}