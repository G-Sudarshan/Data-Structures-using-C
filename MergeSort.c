#include<stdio.h>
#include<conio.h>
#define max 100
void merge(int a[],int low,int mid, int high);
void mergesort(int a[],int low,int high);
int n;
void main()
{
    int a[max],i;
    printf("enter no.of elements : ");
    scanf("%d",&n);
    a[n];
    printf("\n\nEnter the elements :");
    for(i=0;i<n;i++)
    {
        printf("\nEnter element %d : ",i+1);
        scanf("%d",&a[i]);

    }

    mergesort(a,0,n-1);
    printf("the sorted list is : ");
    for(i=0;i<n;i++)
    {

        printf("%d   ",a[i]);

    }
}

void mergesort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

void merge(int a[],int low,int mid,int high)
{
    int i,j,k,b[n];
    i=low;
    j=mid+1;
    k=0;
    while(i<=mid && j<=high)
    {

        if(a[i]<=a[j])
        {
            b[k++]=a[i++];
        }
        else
        {
          b[k++]=a[j++];
        }
    }
    while(i<=mid)
    {
        b[k++]=a[i++];
    }
    while(j<=high)
    {
        b[k++]=a[j++];
    }

    for(j=low,k=0;j<=high;j++,k++)
    {
        a[j]=b[k];
    }
}
