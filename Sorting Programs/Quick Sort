#include<stdio.h>
void swap(int a[],int start,int end)
{
    int temp=a[start];
    a[start]=a[end];
    a[end]=temp;
}
int partition(int a[],int l,int u)
{
    int pivot=a[l];
    int start=l;
    int end=u;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(a,start,end);
        }
    }
    swap(a,l,end);
    return end;
}
void sort(int a[],int l,int u)
{
    if(l<u)
    {
        int loc=partition(a,l,u);
        sort(a,l,loc-1);
        sort(a,loc+1,u);
    }
}
void main()
{
    int a[50];
    int n,i;
    printf("Enter the no of nodes : ");
    scanf("%d",&n);
    printf("\nEnter the elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nElements before sorting :\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    int l=0;
    int u=n-1;
    sort(a,l,u);
    printf("\nElements after sorting :\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
