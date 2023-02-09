#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct purush
{
    char name[20];
    int id;
};

int size = 5;
int front = -1;
int rare = -1;

struct queue
{
    struct purush reservation;
    struct queue *next;
    struct queue *previous;
};

struct queue *enqueue(struct queue *head)
{
    if (rare == size - 1)
    {
        printf("queue is full\n");
        getch();
        return head;
    }
    else
    {
        rare++;
        front = 0;
        if (head == NULL)
        {
            head = (struct queue *)malloc(sizeof(struct queue));
            head->next = NULL;
            head->previous = NULL;
            printf("ENTER name\n");
            scanf("%s", &head->reservation.name);
            printf("ENTER id\n");
            scanf("%d", &head->reservation.id);
            return head;
        }
        else
        {
            struct queue *ptr = (struct queue *)malloc(sizeof(struct queue));
            struct queue *p = head;
            printf("ENTER name\n");
            scanf("%s", &ptr->reservation.name);
            printf("ENTER id\n");
            scanf("%d", &ptr->reservation.id);
            while (p->next != NULL)
            {
                p = p->next;
            }
            ptr->next = p->next;
            ptr->previous = p;
            p->next = ptr;
            return head;
        }
    }
}

struct queue *dequeue(struct queue *head)
{
    if (front == -1)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else
    {
        // if (head == NULL)
        // {
        //     return head;
        // }
        if (head->next == NULL)
        {
            struct queue *p = head;

            printf("\ndeleted name : %s\n", head->reservation.name);
            printf("\ndeleted id : %d\n", head->reservation.id);
            head = NULL;
            free(p);
            front = -1;
            rare = -1;
            return head;
        }
        else
        {
            struct queue *p = head;
            printf("\ndeleted name : %s\n", head->reservation.name);
            printf("\ndeleted id : %d\n", p->reservation.id);
            head = head->next;
            head->previous = NULL;
            free(p);
            front++;
            return head;
        }
    }
    return head;
}

struct queue *display(struct queue *head)
{

    struct queue *p = head;
    if (p != NULL)
    {
        printf("ELEMENTS : ");
        while (p != NULL)
        {
            printf("Name : %s\n", p->reservation.name);
            printf("Id : %d\n", p->reservation.id);
            p = p->next;
        }
    }
    else
    {
        printf("QUEUE IS EMPTY\n");
    }
    return head;
}

struct queue *search(struct queue *head, int id)
{
    struct queue *p = head;
    if (head == NULL)
    {
        printf("empty queue\n");
        return head;
    }
    while (p != NULL)
    {
        if (p->reservation.id == id)
        {
            printf("Name : %s\n", p->reservation.name);
            printf("Id : %d\n", p->reservation.id);
        }
        p = p->next;
    }
    return head;
}
int main()
{
    int ch, id;
    struct queue *head;
    head = NULL;
    do
    {
        printf("\n1.Enter data \n2.Delete data \n3.DISPLAY data\n4.search\n5.exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            head = enqueue(head);
            break;
        case 2:
            head = dequeue(head);
            break;
        case 3:
            head = display(head);
            break;
        case 4:
            printf("enter id to search\n");
            scanf("%d", &id);
            head = search(head, id);
            break;
        }

    } while (ch != 5);

    return 0;
}