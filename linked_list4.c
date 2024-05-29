#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
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
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning
void insertAtBeginning(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
    } else {
        struct Node* current = head;
        while (current->next != head) {
            current = current->next;
        }
        current->next = newNode;
        newNode->next = head;
        head = newNode;
    }
    printf("%d inserted at the beginning.\n", data);
}

// Function to insert a node at the end
void insertAtEnd(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
    } else {
        struct Node* current = head;
        while (current->next != head) {
            current = current->next;
        }
        current->next = newNode;
        newNode->next = head;
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
        current->next = newNode;
        printf("%d inserted at position %d.\n", data, position);
    }
}

// Function to delete a node with a given value
void deleteNode(int data) {
    if (head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    struct Node* current = head;
    struct Node* prev = NULL;

    while (1) {
        if (current->data == data) {
            if (prev == NULL) {
                while (current->next != head) {
                    current = current->next;
                }
                head = head->next;
                current->next = head;
            } else {
                prev->next = current->next;
            }
            free(current);
            printf("%d deleted from the list.\n", data);
            return;
        }

        if (current->next == head) {
            printf("%d not found in the list. Cannot delete.\n", data);
            return;
        }

        prev = current;
        current = current->next;
    }
}

// Function to display the circular linked list
void display() {
    struct Node* current = head;
    if (current == NULL) {
        printf("The list is empty.\n");
    } else {
        printf("Circular Linked List: ");
        do {
            printf("%d -> ", current->data);
            current = current->next;
        } while (current != head);
        printf("...\n");
    }
}

// Function to search for a node with a given value
void search(int data) {
    struct Node* current = head;
    int position = 1;
    do {
        if (current->data == data) {
            printf("%d found at position %d.\n", data, position);
            return;
        }
        current = current->next;
        position++;
    } while (current != head);
    printf("%d not found in the list.\n", data);
}

int main() {
    int choice, data, position;

    while (1) {
        printf("\nCircular Linked List Menu:\n");
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
