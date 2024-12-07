#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *next;
};
typedef struct node Node;

Node *nnode, *temp=NULL, *head=NULL, *t1;
int n, ch, data, i, pos;

void create() {
    printf("Enter the limit: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        nnode = (Node *)malloc(sizeof(Node));
        printf("Enter the elements: ");
        scanf("%d", &data);
        nnode->info = data;
        nnode->next = NULL;
        if (head == NULL)
            temp = head = nnode;
        else {
            temp->next = nnode;
            temp = nnode;
        }
    }
}

void insertfirst() {
    nnode = (Node *)malloc(sizeof(Node));
    printf("Enter the element: ");
    scanf("%d", &data);
    nnode->info = data;
    nnode->next = head;
    head = nnode;
    n++;
}

void insertend() {
    nnode = (Node *)malloc(sizeof(Node));
    printf("Enter the element: ");
    scanf("%d", &data);
    nnode->info = data;
    nnode->next = NULL;
    if (head == NULL)
        head = nnode;
    else {
        t1 = head;
        while (t1->next != NULL) {
            t1 = t1->next;
        }
        t1->next = nnode;
    }
    n++;
}

void insertpos() {
    int c = 1;
    printf("Enter the position: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return;
    }
    nnode = (Node *)malloc(sizeof(Node));
    printf("Enter the element: ");
    scanf("%d", &data);
    nnode->info = data;
    if (pos == 1) {
        nnode->next = head;
        head = nnode;
    } else {
        t1 = head;
        while (c < pos - 1 && t1 != NULL) {
            t1 = t1->next;
            c++;
        }
        nnode->next = t1->next;
        t1->next = nnode;
    }
    n++;
}

void deletefirst() {
    if (head == NULL) {
        printf("Underflow\n");
        return;
    }
    temp = head;
    head = head->next;
    free(temp);
    printf("Deleted first element.\n");
    n--;
}

void deleteend() {
    if (head == NULL) {
        printf("Underflow\n");
        return;
    }
    if (head->next == NULL) {
        free(head);
        head = NULL;
    } else {
        t1 = head;
        while (t1->next->next != NULL) {
            t1 = t1->next;
        }
        temp = t1->next;
        t1->next = NULL;
        free(temp);
    }
    printf("Deleted last element.\n");
    n--;
}

void deletepos() {
    if (head == NULL) {
        printf("Underflow\n");
        return;
    }
    printf("Enter the position: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return;
    }
    if (pos == 1) {
        temp = head;
        head = head->next;
        free(temp);
    } else {
        int c = 1;
        t1 = head;
        while (c < pos - 1 && t1 != NULL) {
            t1 = t1->next;
            c++;
        }
        temp = t1->next;
        t1->next = t1->next->next;
        free(temp);
    }
    printf("Deleted element at position %d.\n", pos);
    n--;
}

void display() {
    printf("The Linked List is: ");
    t1 = head;
    while (t1 != NULL) {
        printf("%d -> ", t1->info);
        t1 = t1->next;
    }
    printf("NULL\n");
}

int main() {
    do {
        printf("\n1. Create\n2. Insert\n3. Delete\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                create();
                break;
            case 2:
                printf("1. Insert First\n2. Insert at End\n3. Insert at Position\n");
                printf("Enter your choice: ");
                scanf("%d", &ch);
                switch (ch) {
                    case 1:
                        insertfirst();
                        break;
                    case 2:
                        insertend();
                        break;
                    case 3:
                        insertpos();
                        break;
                    default:
                        printf("Wrong choice.\n");
                }
                break;
            case 3:
                printf("1. Delete First\n2. Delete at End\n3. Delete at Position\n");
                printf("Enter your choice: ");
                scanf("%d", &ch);
                switch (ch) {
                    case 1:
                        deletefirst();
                        break;
                    case 2:
                        deleteend();
                        break;
                    case 3:
                        deletepos();
                        break;
                    default:
                        printf("Wrong choice.\n");
                }
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Wrong choice.\n");
        }
    } while (ch != 5);
    return 0;
}