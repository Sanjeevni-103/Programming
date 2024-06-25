#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning
void insertAtBeginning(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    printf("%d inserted at the beginning.\n", data);
}

// Function to insert a node at the end
void insertAtEnd(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
    printf("%d inserted at the end.\n", data);
}

// Function to insert a node at a specified position
void insertAtPosition(int data, int position) {
    if (position < 1) {
        printf("Invalid position. Position should be 1 or greater.\n");
        return;
    }

    if (position == 1) {
        insertAtBeginning(data);
        return;
    }

    struct Node* newNode = createNode(data);
    struct Node* current = head;
    int currentPosition = 1;

    while (current != NULL && currentPosition < position - 1) {
        current = current->next;
        currentPosition++;
    }

    if (current == NULL) {
        printf("Invalid position. Position exceeds the length of the list.\n");
    } else {
        newNode->next = current->next;
        newNode->prev = current;
        if (current->next != NULL) {
            current->next->prev = newNode;
        }
        current->next = newNode;
        printf("%d inserted at position %d.\n", data, position);
    }
}

// Function to delete a node with a given value
void deleteNode(int data) {
    struct Node* current = head;

    while (current != NULL && current->data != data) {
        current = current->next;
    }

    if (current == NULL) {
        printf("%d not found in the list. Cannot delete.\n", data);
    } else {
        if (current->prev != NULL) {
            current->prev->next = current->next;
        } else {
            head = current->next;
        }
        if (current->next != NULL) {
            current->next->prev = current->prev;
        }
        free(current);
        printf("%d deleted from the list.\n", data);
    }
}

// Function to display the doubly linked list in both directions
void display() {
    struct Node* current = head;
    if (current == NULL) {
        printf("The list is empty.\n");
    } else {
        printf("Doubly Linked List (forward): ");
        while (current != NULL) {
            printf("%d <-> ", current->data);
            current = current->next;
        }
        printf("NULL\n");
        printf("Doubly Linked List (backward): ");
        while (current != NULL) {
            current = current->prev;
            if (current != NULL) {
                printf("%d <-> ", current->data);
            }
        }
        printf("NULL\n");
    }
}

// Function to search for a node with a given value
void search(int data) {
    struct Node* current = head;
    int position = 1;
    while (current != NULL) {
        if (current->data == data) {
            printf("%d found at position %d.\n", data, position);
            return;
        }
        current = current->next;
        position++;
    }
    printf("%d not found in the list.\n", data);
}

int main() {
    int choice, data, position;

    while (1) {
        printf("\nDoubly Linked List Menu:\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Insert at a position\n");
        printf("4. Delete a node\n");
        printf("5. Display the list\n");
        printf("6. Search for a node\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert at the beginning: ");
                scanf("%d", &data);
                insertAtBeginning(data);
                break;
            case 2:
                printf("Enter data to insert at the end: ");
                scanf("%d", &data);
                insertAtEnd(data);
                break;
            case 3:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter the position to insert: ");
                scanf("%d", &position);
                insertAtPosition(data, position);
                break;
            case 4:
                printf("Enter data to delete: ");
                scanf("%d", &data);
                deleteNode(data);
                break;
            case 5:
                display();
                break;
            case 6:
                printf("Enter data to search: ");
                scanf("%d", &data);
                search(data);
                break;
            case 7:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
