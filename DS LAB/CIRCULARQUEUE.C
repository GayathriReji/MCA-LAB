#include <stdio.h>
#include <conio.h>

int item, a[20], front = -1, rear = -1, c = 0; // Corrected `front` and `rear` declaration

void enqueue(int n) {
    printf("\nEnter the item to be inserted: ");
    scanf("%d", &item);
    if ((front == 0 && rear == n - 1) || (rear == front - 1)) { // Queue overflow condition
        printf("Queue is overflow!!!\n");
        return;
    }
    if (front == -1) { // First insertion
        front = rear = 0;
    } else if (rear == n - 1 && front != 0) { // Wrap around
        rear = 0;
    } else { // Normal increment
        rear++;
    }
    a[rear] = item;
    c++;
    printf("%d is inserted\n", item);
}

void dequeue(int n) {
    if (front == -1) { // Queue underflow condition
        printf("Queue is empty!!\n");
        return;
    }
    printf("Dequeued element is: %d\n", a[front]);
    c--;
    if (front == rear) { // Single element left
        front = rear = -1;
    } else if (front == n - 1) { // Wrap around
        front = 0;
    } else { // Normal increment
        front++;
    }
}

void display(int n) {
    if (front == -1) { // Queue empty condition
        printf("Queue is empty!!\n");
        return;
    }
    printf("The queue elements are: ");
    int i = front;
    while (1) {
        printf("%d\t", a[i]);
        if (i == rear) // End of queue
            break;
        i = (i + 1) % n; // Circular increment
    }
    printf("\tCount: %d\n", c);
}

int main() {
    int ch, n;
   // clrscr(); // Clear screen (useful in Turbo C, ignore for modern compilers)
    printf("Enter the limit: ");
    scanf("%d", &n);
    do {
        printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                enqueue(n);
                break;
            case 2:
                dequeue(n);
                break;
            case 3:
                display(n);
                break;
            case 4:
                printf("Exiting....\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (ch != 4);
    getch(); // Wait for user input (useful in Turbo C, ignore for modern compilers)
    return 0;
}
