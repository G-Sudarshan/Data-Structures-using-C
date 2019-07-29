#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<conio.h>
#define size 30

void push(char a);
char pop();
char stack[size],infix[size],postfix[size];
int top=0;
int preced(char ch);

void main()
{
    char ch;
    int i,k,p=0;
    for(i=0;i<size;i++)
    {
        stack[i]='\0';

    }
    printf("Enter an infix expression ");
    scanf("%s",infix);
    for(i=0;infix[i]!='\0';i++)
    {
        ch=infix[i];
        if(isalnum(ch))
        {
            postfix[p++]=ch;
        }
        else if(ch=='(')
        {
            push(ch);
        }
        else if(ch==')')
        {
            while(stack[top]!='(')
            {
                postfix[p++]=pop();
            }
            pop();
        }
        else if(ch=='/'||ch=='*'||ch=='+'||ch=='-')
        {
            if(preced(ch)>preced(stack[top]))
            {
                push(ch);
            }
            else
            {
                while(preced(ch)<=preced(stack[top]))
                {
                    postfix[p++]=pop();
                }
            }
        }
    }

    postfix[p]='\0';
    while(top>0)
    {
        postfix[p++]=pop();
        printf("The postfix expression is %s\n",postfix);
    }
}

void push(char a)
{
    if(top<size-1)
    {
        stack[++top]=a;
    }
}

char pop()
{

    char ch;
    if(top>0)
    {
        ch=stack[top];
        stack[top--]='\0';
        return ch;
    }
    else
    {
        printf("Error Stack is empty");
        exit(-1);

    }
}


int preced(char ch)
{
    if (ch=='('||ch==')')
    {
        return 0;
    }
    else if(ch=='+'||ch=='-')
    {
        return 1;
    }
    else if(ch=='/'||ch=='*')
    {
        return 2;
    }
}
