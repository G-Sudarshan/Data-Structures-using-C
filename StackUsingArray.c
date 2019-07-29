#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10

void push();
void pop();
void display();
int a[size];
int top;

void main()
{   top=0;
    int a[size],choice,j,temp;
    while(1){
    printf("\n\n************MENU******************");
    printf("\n\n1.insert \n\n2.delete\n\n3.display\n\n4.exit");
    printf("\n\nenter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:push();
        break;
        case 2:pop();
        break;
        case 3: display();
        break;
        case 4:exit(0);
        break;
        default:printf("you have enetered invalid choice ");
        break;
    }

    }
}

void push()
{
    if(top>=size-1)
    {
        printf("Stack is full insertion not possible ");
    }
    else{
    top++;
    printf("enter element you want to insert : ");
    scanf("%d",&a[top]);
    printf("insertion of %d successful",a[top]);

    }
}

void pop()
{
    if(top==0)
    {
        printf("Stack is empty deletion not possible ");

    }
    else
    {
        int temp=a[top];

        top--;
        printf("top element %d is deleted",temp);

    }
}

void display()
{
    int i;
    for(i=1;i<=top;i++)
    {
        printf("%d    ",a[i]);
    }
}
