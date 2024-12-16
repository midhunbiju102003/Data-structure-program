#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cqueue[100],maxsize,front=0,rear=0;
void enqueue();
void dequeue();
void peek();
void main()
{
printf("Enter the queue size\n");
scanf("%d", &maxsize);
int choice;
int element,i;
do
{
printf("1.Enter 1 to see rear and front value of queue\n");
printf("2.Enter 2 to insert an element in the queue\n");
printf("3.Enter 3 to delete an element from the queue\n");
scanf("%d",&i);
switch(i)
{
case 1:peek();
break;
case 2:printf("\nEnter the elements to be inserted\n");
scanf("%d",&element);
enqueue(element);
break;
case 3:dequeue();
break;
default:printf("\nEntered the wrong choice\n");
}
printf("\nDo you want to continue(1/2)\n");
scanf("%d", &choice);
}
while(choice==1);
}
void enqueue(int data)
{
if(rear==maxsize-1)
{
printf("Sorry,The circular queue is full cannot insert\n");
exit(0);
}
else
{
cqueue[rear]=data;
rear=rear+1;
}
}
void dequeue()
{
if(front==-1)
{
printf("The circular queue is empty\n");
exit(0);
}
else
{
printf("The deleted element is %d \n",cqueue[front]);
front=front+1;
}
}
void peek()
{
printf("The front value is %d \n",front);
printf("The rear value is %d \n",rear);
}
