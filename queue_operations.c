#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10

void enqueue(int value);
void dequeue();
void display();

int q[size],front=-1,rear=-1;

void main()
{
    int value,choice;

    while(1)
    {
        printf("\n\n**********MENU************");
        printf("\n\n1Insert\n\n2.Delete\n\n3.Disply\n\n4.Exit\n\n");
        printf("Enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter Value to be inserted ");
            scanf("%d",&value);
            enqueue(value);
            break;
            case 2:dequeue();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            break;

            default: printf("You have entered wrong choice ");
            break;

        }


    }

}


void enqueue(int value)
{
    if(rear==size-1)
    {
        printf("Queue is full insertion is not possible");

    }
    else{
        if(front==-1)
        {
            front =0;
        }

            rear++;
            q[rear]=value;
        printf("Insertion successful");
    }
}

void dequeue()
{
    if((front>rear) ||rear==-1 )
    {
       printf(" Queue is empty deletion not possible");

    }

    else
    {
         printf("Deleted : %d ",q[front]);
        front++;
        if(front>rear)
        {
            front=rear =-1;
        }
    }
}

void display()
{
    if(front==-1 )
    {
        printf("Queue is empty");
    }

    else{
        int i;
        printf("\n\n elements are:");

        for(i=front;i<=rear;i++)
        {
            printf("%d    ",q[i]);
        }
    }

}
