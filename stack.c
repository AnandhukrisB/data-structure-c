#include <stdio.h>

int a[5];
int top = -1;

int menu() {

    int ch;

    printf("\n1) Push\n2) Pop\n3) Peek\n4) Exit\nEnter your choice: ");
    scanf("%d", &ch);

    return ch;
}

void push(int e) {
    if(top + 1 == 5) {
        printf("\nStack overflow!!\n");
    }
    else {
        a[++top] = e;
    }
    for(int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
}

void pop() {
    if(top == -1) {
        printf("Stack underflow!!");
    }
    else {
        printf("Element %d popped!\n", a[top--]);
    }
    for(int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
}
void peek() {
    if(top == -1) {
        printf("\nStack underflow!!");
    }
    else {
        printf("\nThe top most element is: %d", a[top]);
    }
}

void processStack() {

    int e;
    int ch;
    
    for(ch = menu(); ch != 4; ch = menu()) {
        printf("%d", ch);
        switch (ch) {
            case 1:
                printf("\nEnter the element to insert: ");
                scanf("%d", &e);
                push(e);
                break;
            case 2:
                pop();
                break;
            case 3: 
                peek();
                break;
            default:
                printf("Exiting...");
                break;
        }
    }
}

int main() {

    processStack();

    return 0;
}