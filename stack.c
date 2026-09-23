#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int data) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = data;
    n->next = top;
    top = n;
    printf("%d pushed\n", data);
}

void pop() {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    struct Node* t = top;
    printf("%d popped\n", top->data);
    top = top->next;
    free(t);
}

void display() {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    struct Node* t = top;
    printf("Stack: ");
    while (t) {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");
}

int main() {
    int ch, num;

    while (1) {
        printf("\n1.Push  2.Pop  3.Display  4.Exit\nChoice: ");
        scanf("%d", &ch);

        if (ch == 1) {
            printf("Enter number: ");
            scanf("%d", &num);
            push(num);
        }
        else if (ch == 2) {
            pop();
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
