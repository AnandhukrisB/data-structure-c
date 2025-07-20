#include <stdio.h>

int a[4];
int front = -1, rear = -1;

int menu() {
    int ch;

    printf("\n1) Enqueue\n2) Dequeue\n3) Front\n4) Peek\n5) Exit\nEnter the choice: ");
    scanf("%d", &ch);

    return ch;
}

void enqueue(int e) {

    
    if(rear == 3) {
        printf("Queue is full!!");
    }
    else {
        if(front = -1) front = 0;
        a[++rear] = e;
    }
    for(int i = 0; i < 4; i++) {
        printf("%d ", a[i]);
    }
    printf("\nFront: %d ", front);
    printf("\nRear: %d ", rear);
}

void dequeue() {
    if(front == -1) {
        printf("\nQueue is Empty!");
    }
    else if(front == rear) {
        printf("\nQueue is full");
    }
    else {
        front++;
    }
}
void peek() {
    if(front == -1) {
        printf("\nQueue is Empty!");
    }
    else if(front == rear) {
        printf("\nQueue is full");
    }
    else {
        printf("Last inserted element is: %d", a[rear]);
    }
}

void head() {
    if(front == -1) {
        printf("\nQueue is Empty!");
    }
    else if(front == rear) {
        printf("\nQueue is full");
    }
    else {
        printf("Frst inserted element is: %d", a[front]);
    }
}

void processQueue() {

    int e;
    int ch;
    
    for(ch = menu(); ch != 5; ch = menu()) {
        printf("%d", ch);
        switch (ch) {
            case 1:
                printf("\nEnter the element to insert: ");
                scanf("%d", &e);
                enqueue(e);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                head();
                break;
            case 4:
                peek();
                break;
            default:
            break;
        }
    }
    printf("Exiting...");
}


int main() {

    processQueue();

    return 0;
}