#include <stdio.h>
#include <stdbool.h>



int stack[6]; // Array of size 6
int top = -1;        


bool isEmpty() {
    if (top==-1)
        return true;
    else
        return false;
}

bool isFull() {
    if (top==5) 
        return true;
    else
        return false;
}

void push(int value) {
    if (isFull()) {
        printf("Stack Overflow Cannot push %d\n", value);
    } else {
        ++top;
        stack[top] = value;
        printf("Pushed %d onto the stack\n", value);
    }
}

void pop() {
    if (isEmpty()) {
        printf("Stack Underflow Cannot pop\n");
    } else {
        printf("Popped %d from the stack\n", stack[top]);
        --top;
    }
}

void peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Top element is: %d\n", stack[top]);
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    peek(); 
    pop();
    pop();
    pop();  
    peek(); 
    return 0;
}