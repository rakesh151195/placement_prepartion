//  Q.Implement a Queue using linked list.



#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int info;
    struct node *ptr;
}*front,*rear,*temp,*front1;
 
int peek();
void enqueue(int data);
void dequeue();
void display();
void create();
 
int count = 0;
void main()
{
    int n, ch, first;
    printf("\n 1 - Enque");
    printf("\n 2 - Deque");
    printf("\n 3 - peek");
    printf("\n 4 - Exit");
    printf("\n 5 - Display");
    create();
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter your choice : ");
            scanf("%d", &n);
            enqueue(n);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            first = peek();
            if (first != 0)
                printf("peek element : %d", first);
            else
                printf("\n No front element in Queue as queue is empty");
            break;
        case 4:
            exit(0);
        case 5:
            display();
            break;
        default:
            printf(" select correct option  ");
            break;
        }
    }
}
 
/* Create  */
void create()
{
    front = rear = NULL;
}
 
/* enter value from into queue */
void enqueue(int data)
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(1*sizeof(struct node));
        rear->ptr = NULL;
        rear->info = data;
        front = rear;
    }
    else
    {
        temp=(struct node *)malloc(1*sizeof(struct node));
        rear->ptr = temp;
        temp->info = data;
        temp->ptr = NULL;
 
        rear = temp;
    }
    count++;
}
 
/* Displaying */
void display()
{
    front1 = front;
 
    if ((front1 == NULL) && (rear == NULL))
    {
        printf("Queue is empty");
        return;
    }
    while (front1 != rear)
    {
        printf("%d ", front1->info);
        front1 = front1->ptr;
    }
    if (front1 == rear)
        printf("%d", front1->info);
}
 
/* Dequeing the queue */
void dequeue()
{
    front1 = front;
        if (front1->ptr != NULL)
        {
            front1 = front1->ptr;
            printf("\n Dequed value : %d", front->info);
            free(front);
            front = front1;
        }
        else
        {
            printf("\n Dequed value : %d", front->info);
            free(front);
            front = NULL;
            rear = NULL;
        }
        count--;
}
 
/* Returns the front element of queue */
int peek()
{
    if ((front != NULL) && (rear != NULL))
        return(front->info);
    else
        return 0;
}
