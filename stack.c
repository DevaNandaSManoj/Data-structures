#include <stdio.h>
#include <stdlib.h>


int stack[100];
int top = -1;


void push() {
    int x;
    printf("Enter number to push: ");
    scanf("%d", &x);
    if (top == 100 - 1) {
        printf("Stack Overflow!\n");
    } else {
        top++;
        stack[top] = x;
        printf("Pushed %d onto the stack.\n", x);
    }
}


void pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
    } else {
        int y = stack[top];
        top--;
        printf("Popped %d from the stack.\n", y);
    }
}


void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}


int main() {
    int ch;
    while (1) {
       
        printf("\nStack Operations Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        
        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! \n");
        }
    }
    return 0;
}
	

