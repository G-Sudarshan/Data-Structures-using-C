
#include<stdio.h>
#include<conio.h>
#define max 100

void main()
{
    int a[max],i,j,b,temp,size;
    printf("Enter size of array : ");
    scanf("%d",&size);N
    printf("Please enter the elements :");
    for(i=0;i<size;i++)
    {
        printf("Enter elemnt %d : ",i+1);
        scanf("%d",&a[i]);
    }

     for(i=1;i<size;i++)
     {
         temp=a[i];
         j=i-1;
         while(temp<a[j] && j>=0)
         {
             a[j+1]=a[j];
             --j;
         }
         a[j+1]=temp;
     }

     printf("Sorted elements are : ");
     for(i=0;i<size;i++)
     {
         printf("%d    ",a[i]);

     }
}
