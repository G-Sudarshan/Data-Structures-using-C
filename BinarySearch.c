#include<stdio.h>
#include<conio.h>
#define max 100

void main()
{
    int a[max],i,j,temp,size,first,last,middle,search;
    printf("Enter size of array : ");
    scanf("%d",&size);
    a[size];
    for(i=0;i<size;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&a[i]);

    }


    for(i=0;i<size;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {


            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;

            }
        }
    }
    printf("Enter the value to find : ");
    scanf("%d",&search);
    first=0;
    last=size-1;
    middle=(first+last)/2;

    while(first<=last)
    {

        if(a[middle]==search)
        {
            printf("%d found founf at location %d",search,middle+1);

            break;
        }
        else if(a[middle]>search)
        {
            last=middle-1;
            middle=(first+last)/2;
        }

         else if(a[middle]<search)
        {
            first=middle+1;
            middle=(first+last)/2;

        }



    }


    if(first>last)
        {
            printf("Element not found");
        }


}
