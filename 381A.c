    #include <stdio.h>
    #include <stdlib.h>

    typedef struct Node {
        int data;
        struct Node *next;
    } Node;

    typedef struct {
        Node *head, *tail;
    } List;


    void init(List *list) {
        list->head = NULL;
        list->tail = NULL;
    }

    void push(List *list, int x) {
        Node *node = (Node *)malloc(sizeof(Node));
        node->data = x;
        node->next = NULL;

        if (list->head == NULL) {
            list->head = node;
            list->tail = node;
        } 
        else {
            list->tail->next = node;
            list->tail = node;
        }
    }

    int popfront(List *list) {
        Node *node = list->head;
        int data = node->data;

        if (node->next == NULL) {
            free(node);
            list->head = NULL;
            list->tail = NULL;
        } 
        else {
            list->head = node->next;
            free(node);
        }
        return data;
    }

    int popback(List *list) {
        Node *node = list->head;
        int data = node->data;

        if (node->next == NULL) {
            free(node);
            list->head = NULL;
            list->tail = NULL;
        } 
        else {
            while (node->next->next != NULL) {
                node = node->next;
            }
            data = node->next->data;
            free(node->next);
            node->next = NULL;
            list->tail = node;
        }
        return data;
    }

    int main() {
        List list;
        init(&list);

        int n;
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            push(&list, x);
        }

        int total1 = 0, total2 = 0;
        int turn = 0;

        while (list.head != NULL) {
            if (turn == 0) {
                if (list.head->data > list.tail->data) {
                    total1 += popfront(&list);
                } 
                else {
                    total1 += popback(&list);
                }
            } else {
                if (list.head->data > list.tail->data) {
                    total2 += popfront(&list);
                } 
                else {
                    total2 += popback(&list);
                }
            }
            turn = 1 - turn;
        }

        printf("%d %d\n", total1, total2);

        return 0;
    }