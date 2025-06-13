#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            int temp;
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    
    int first=a[0];
    int second=-1;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=first)
        {
            second=a[i];
            break;
        }
    }
    if(second!=-1)
    {
        printf("Second largest element : %d",second);
    }
    
}
