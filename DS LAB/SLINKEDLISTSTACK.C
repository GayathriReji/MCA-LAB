#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for malloc and free

struct node {
    int info;
    struct node *next;
};
typedef struct node Node;

Node *nnode, *temp = NULL, *top = NULL;

void push() {
    nnode = (Node *)malloc(sizeof(Node));
    if (nnode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    printf("Enter the element to be pushed: ");
    scanf("%d", &nnode->info);
    nnode->next = top; // Link the new node to the top
    top = nnode; // Update top to point to the new node
    printf("Element pushed successfully.\n");
}

void pop() {
    if (top == NULL) {
        printf("Stack is underflow.\n");
        return;
    }
    temp = top; // Temporarily store the top node
    top = top->next; // Update top to the next node
    printf("Popped element: %d\n", temp->info);
    free(temp); // Free the memory of the popped node
}

void display() {
    if (top == NULL) {
        printf("Stack is empty!\n");
        return;
    }
    int count = 0;
    printf("The stack: ");
    temp = top;
    while (temp != NULL) {
        printf("%d -> ", temp->info);
        temp = temp->next;
        count++;
    }
    printf("NULL\n");
    printf("Count: %d\n", count);
}

int main() {
    int ch;
    do {
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
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
                printf("Exiting....\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (ch != 4);
    return 0;
}
