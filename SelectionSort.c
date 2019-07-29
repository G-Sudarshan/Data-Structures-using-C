#include<stdio.h>
#include<conio.h>
#define max 100

void main()
{
    int a[max],i,j,size,temp;

    printf("Enter size of array  :");
    scanf("%d",&size);
    a[size];
    printf("\n\nEnter the elements ");
    for(i=0;i<size;i++)
    {
        printf("\nEnter element %d :  ",i+1);
        scanf("%d",&a[i]);
    }

 for(i=0;i<size;i++)
 {
     for(j=0;j<size;j++)
     {
       if(a[i]<a[j])
       {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;

       }
     }
 }


    printf("\n\nSorted arry is :");
    for(i=0;i<size;i++)
    {
        printf("%d     ",a[i]);
    }

}
