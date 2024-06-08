#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

int circularQueue[MAX_SIZE];
int front = -1;
int rear = -1;

int isFull() {
    return (front == 0 && rear == MAX_SIZE - 1) || (front == rear + 1);
}

int isEmpty() {
    return front == -1;
}

void enqueue(int value) {
    if (isFull()) {
        printf("Circular Queue is full. Cannot enqueue.\n");
    } else {
        if (front == -1) {
            front = rear = 0;
        } else {
            if (rear == MAX_SIZE - 1) {
                rear = 0;
            } else {
                rear++;
            }
        }
        circularQueue[rear] = value;
        printf("Enqueued: %d\n", value);
    }
}

void dequeue() {
    if (isEmpty()) {
        printf("Circular Queue is empty. Cannot dequeue.\n");
    } else {
        printf("Dequeued: %d\n", circularQueue[front]);
        if (front == rear) {
            front = rear = -1;
        } else {
            if (front == MAX_SIZE - 1) {
                front = 0;
            } else {
                front++;
            }
        }
    }
}

void display() {
    int i;

    if (isEmpty()) {
        printf("Circular Queue is empty.\n");
    } else {
        printf("Circular Queue elements: ");
        if (front <= rear) {
            for (i = front; i <= rear; i++) {
                printf("%d ", circularQueue[i]);
            }
        } else {
            for (i = front; i < MAX_SIZE; i++) {
                printf("%d ", circularQueue[i]);
            }
            for (i = 0; i <= rear; i++) {
                printf("%d ", circularQueue[i]);
            }
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\nCircular Queue Menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Check if Circular Queue is Full\n");
        printf("5. Check if Circular Queue is Empty\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                if (isFull()) {
                    printf("Circular Queue is full.\n");
                } else {
                    printf("Circular Queue is not full.\n");
                }
                break;
            case 5:
                if (isEmpty()) {
                    printf("Circular Queue is empty.\n");
                } else {
                    printf("Circular Queue is not empty.\n");
                }
                break;
            case 6:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
