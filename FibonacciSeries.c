
#include<stdio.h>
#include<conio.h>

int fibo(int no1,int no2,int maxval);
int i=0;
void main()
{
    int m,no1,no2;
    printf("Enter maximum position");
    scanf("%d",&m);
    printf("Enter no 1 :");
    scanf("%d",&no1);
    printf("Enter no 2 :");
    scanf("%d",&no2);
    fibo(no1,no2,m);
}

int fibo(int no1,int no2,int maxval)
{
    int no3=no1+no2;
    printf("\t%d",no3);
    no1=no2;
    no2=no3;
    i++;
    if(i<maxval)
    {
        fibo(no1,no2,maxval);
    }
}

