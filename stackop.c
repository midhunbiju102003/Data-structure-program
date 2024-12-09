#include <stdio.h>


void push(int data);
void pop();
void peek();
int isfull();
int isempty();


int stack[100], maxsize, top = -1;

void main() {
    int item, term;

    
    printf("Enter the stack size: ");
    scanf("%d", &maxsize);

    isempty();


    isfull();

  
    peek();

    printf("Enter the element to be inserted: ");
    scanf("%d", &item);
    push(item);

    printf("Enter 1 to delete an element from stack: ");
    scanf("%d", &term);
    if (term == 1)
        pop();

    peek();
}


int isempty() {
    if (top == -1) {
        printf("The stack is empty.\n");
        return 1;
    } else {
        return 0;
    }
}


int isfull() {
    if (top == maxsize - 1) {
        printf("The stack is full.\n");
        return 1;
    } else {
        return 0;
    }
}

void peek() {
    if (isempty() == 0) {
        printf("The peek of the stack is %d.\n", stack[top]);
    }
}


void push(int data) {
    if (isfull() == 0) {
        top = top + 1;
        stack[top] = data;
        printf("The element %d is inserted.\n", data);
    }
}


void pop() {
    if (isempty() == 0) { 
        printf("The popped element is %d.\n", stack[top]);
        top = top - 1;
    }
}
