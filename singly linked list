#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = data;
    n->next = NULL;
    return n;
}

void insertFirst(struct Node** head, int data) {
    struct Node* n = createNode(data);
    n->next = *head;
    *head = n;
}

void insertEnd(struct Node** head, int data) {
    struct Node* n = createNode(data);
    if (*head == NULL) { *head = n; return; }
    struct Node* t = *head;
    while (t->next) t = t->next;
    t->next = n;
}

void insertPos(struct Node** head, int data, int pos) {
    if (pos == 0) { insertFirst(head, data); return; }
    struct Node* n = createNode(data);
    struct Node* t = *head;
    for (int i = 0; t && i < pos-1; i++) t = t->next;
    if (!t) { printf("Invalid position\n"); free(n); return; }
    n->next = t->next;
    t->next = n;
}

void deleteFirst(struct Node** head) {
    if (!*head) { printf("List empty\n"); return; }
    struct Node* t = *head;
    *head = (*head)->next;
    free(t);
}

void deleteEnd(struct Node** head) {
    if (!*head) { printf("List empty\n"); return; }
    if (!(*head)->next) { free(*head); *head = NULL; return; }
    struct Node* t = *head;
    while (t->next->next) t = t->next;
    free(t->next);
    t->next = NULL;
}

void deletePos(struct Node** head, int pos) {
    if (!*head) { printf("List empty\n"); return; }
    if (pos == 0) { deleteFirst(head); return; }
    struct Node* t = *head;
    for (int i = 0; t && i < pos-1; i++) t = t->next;
    if (!t || !t->next) { printf("Invalid position\n"); return; }
    struct Node* d = t->next;
    t->next = d->next;
    free(d);
}

void printList(struct Node* head) {
    if (!head) { printf("List empty\n"); return; }
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int ch, num, pos;

    while (1) {
        printf("\n1.Insert First  2.Insert End  3.Insert Pos\n");
        printf("4.Delete First  5.Delete End  6.Delete Pos\n");
        printf("7.Print  8.Exit\nChoice: ");
        scanf("%d", &ch);

        if (ch == 1) {
            printf("Number: "); scanf("%d", &num);
            insertFirst(&head, num);
        }
        else if (ch == 2) {
            printf("Number: "); scanf("%d", &num);
            insertEnd(&head, num);
        }
        else if (ch == 3) {
            printf("Number: "); scanf("%d", &num);
            printf("Position: "); scanf("%d", &pos);
            insertPos(&head, num, pos);
        }
        else if (ch == 4) deleteFirst(&head);
        else if (ch == 5) deleteEnd(&head);
        else if (ch == 6) {
            printf("Position: "); scanf("%d", &pos);
            deletePos(&head, pos);
        }
        else if (ch == 7) printList(head);
        else if (ch == 8) break;
        else printf("Invalid choice\n");
    }
    return 0;
}
