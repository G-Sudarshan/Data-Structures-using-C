#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int postfix_evaluation(char postfix[20]);
int push(char ch);
int pop();
int top=0;
int stk[20];
int isoperator(char c)
{
    switch(c)
    {
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
        case '^':
            return 1;
        default: return 0;
    }
}
int main()
{
    char postfix[20];
    int result;
    printf("Enter Postfix Expression");
    gets(postfix);
    result=postfix_evaluation(postfix);
    printf("Result:%d",result);
}
int postfix_evaluation(char postfix[20])
{
    int i=0,len,result,val,op1,op2;
    char c;
    len=strlen(postfix);
    while(i<len)
    {
        c=postfix[i];
        if(c==' '||c=='\t')
            continue;
        else if(isdigit(c))
        {
            val=c-'0';
            push(val);
        }
        else if(isoperator(c))
        {
                op1=pop();
                op2=pop();
                switch(c)
                {
                    case '+': result=op2+op1;
                              break;
                    case '-': result=op2-op1;
                              break;
                    case '*': result=op2*op1;
                              break;
                    case '/': result=op2/op1;
                              break;
                    case '^': result=pow(op2,op1);
                              break;
                }
                push(result);
        }
            i++;
    }
    result=pop();
    return result;
}
 int push(char ch)
{
    top++;
    stk[top]=ch;
}
int pop()
{
    char ch;
    ch=stk[top];
    top--;
    return ch;
}
