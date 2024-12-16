#include <stdio.h>

void enqueue();
void dequeue();
void peek();
int isfull();
int isempty();

int queue[100], maxsize, front = -1, rear = -1;

void main()
{
    int choice, item;
    
    printf("Enter the size of the queue: ");
    scanf("%d", &maxsize);
    
    while(1)
    {
        
        printf("\n--- Queue Operations Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Check if full\n");
        printf("5. Check if empty\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                if(isfull())
                    printf("Queue is full.\n");
                else
                    printf("Queue is not full.\n");
                break;
            case 5:
                if(isempty())
                    printf("Queue is empty.\n");
                else
                    printf("Queue is not empty.\n");
                break;
            case 6:
                printf("Exiting program.\n");
                return;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
}


void enqueue(int item)
{
    if(isfull())
        printf("Queue is full! Cannot enqueue.\n");
    else
    {
        if(front == -1) 
            front = 0;
        rear++;
        queue[rear] = item;
        printf("Enqueued %d\n", item);
    }
}


void dequeue()
{
    if(isempty())
        printf("Queue is empty! Cannot dequeue.\n");
    else
    {
        printf("Dequeued %d\n", queue[front]);
        front++;
        if(front > rear) 
        {
            front = rear = -1;
        }
    }
}


void peek()
{
    if(isempty())
        printf("Queue is empty! No elements to peek.\n");
    else
        printf("Front element is %d\n", queue[front]);
}


int isfull()
{
    if(rear == maxsize - 1)
        return 1; 
    return 0;
}

int isempty()
{
    if(front == -1)
        return 1; 
    return 0;
}
