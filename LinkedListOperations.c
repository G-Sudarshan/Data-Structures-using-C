#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

void insert();
void del();
void display();

struct node
{
    int data;
    struct node *next;
}*start=NULL;

void main()
{


    int i,j,choice;
    while(1)
    {
        printf("\n\n**********MENU************");
        printf("\n\n1Insert\n\n2.Delete\n\n3.Disply\n\n4.Exit\n\n");
        printf("Enter your choice ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();
            break;
            case 2:del();
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

void insert()
{    struct node *temp,*q;
     temp=(struct node*)malloc(sizeof(struct node));
     q=(struct node*)malloc(sizeof(struct node));
    int j;
    printf("enter the element to inserted : ");
    scanf("%d",&j);
    temp->data=j;
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        q=start;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=temp;
    }
    printf("Insertion successful");
}


void del()
{
     struct node *temp,*q;
     temp=(struct node*)malloc(sizeof(struct node));
     q=(struct node*)malloc(sizeof(struct node));
    int a;
    if(start==NULL)
    {
        printf("List is empty deletion ot possible");
    }
    else
    {
        printf("Enter element to be deleted : ");
        scanf("%d",&a);
        if(a==start->data)
        {
            start=start->next;
        }
        else
        {

            q=start;
            while(q->next->data!=a)
            {
                q=q->next;
            }
            temp=q->next;
            q->next=temp->next;
            free(temp);
        }

       printf("deletion successful");
    }


}



void display()
{
     struct node *temp,*q;
     temp=(struct node*)malloc(sizeof(struct node));
     q=(struct node*)malloc(sizeof(struct node));
    q=start;
    printf("Elements are  :   ");
    while(q->next!=NULL)
    {
        printf("%d   ",q->data);
        q=q->next;
    }
     printf("%d   ",q->data);

     getche();
}
