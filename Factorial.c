#include<stdio.h>
#include<conio.h>

int factorial(int num);
int fact=1,c=1;
void main()
{
    int fact,i,j,temp,a;
    printf("Enter the no.");
    scanf("%d",&a);
    fact=factorial(a);
    printf("Factorial of %d is %d",a,fact);
    getchar();

}

int factorial(int num)
{
    if(num==0)
    {
        return 1;
    }
    else
    {
        return(num*factorial(num-1));
    }

}
