#include<stdio.h>
#include<conio.h>
#define max 100

void main()
{
    int a[max],i,j=0,b,temp,size,search;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Please enter the elements :");
    for(i=0;i<size;i++)
    {
        printf("Enter elemnt %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter elemnts you want to search");
    scanf("%d",&search);
    for(i=0;i<size;i++)
    {
        if(search==a[i])
        {
            printf("Element %d found at laocation %d",a[i],i);
            j=1;
        }
    }

    if(j==0)
    {
        printf("Element not found");
    }
}
