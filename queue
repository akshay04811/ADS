#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node *front = NULL, *rear = NULL;

void enqueue(int data) {
struct Node* n = (struct Node*)malloc(sizeof(struct Node));
n->data = data;
n->next = NULL;

if (rear == NULL) {
front = rear = n;
} else {
rear->next = n;
rear = n;
    }
    printf("%d Data inserted\n", data);
}

void dequeue() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    struct Node* t = front;
    printf("%d dequeued\n", front->data);
    front = front->next;
    if (front == NULL) rear = NULL;
    free(t);
}

void display() {
    if (front == NULL) {
        printf("Queue is empty\n");
        printf("underflow condition");
        return;
    }
    struct Node* t = front;
    printf("Queue: ");
    while (t) {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");
}

int main() {
    int ch, num;

    while (1) {
        printf("\n1.Enqueue  \n2.Dequeue  \n3.Display  \n4.Exit\nCh: ");
        scanf("%d", &ch);

        if (ch == 1) {
            printf("Enter number: ");
            scanf("%d", &num);
            enqueue(num);
        }
        else if (ch== 2) {
            dequeue();
        }
        else if (ch == 3) {
            display();
        }
        else if (ch == 4) {
            break;
        }
        else {
            printf("Invalid choice\n");
        }
    }
    return 0;
}
