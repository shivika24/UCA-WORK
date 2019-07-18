#include<stdio.h>
int main()
{
    int n,i;
    printf("enter size of array=");
    scanf("%d",&n);
    int l[n],r[n];
    printf("enter elements of first array=");
    int max1=0;
    for(i=0;i<n;i++)
    {
    scanf("%d",&l[i]);
    }

    printf("enter elements of second array=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&r[i]);
        if(max1<=r[i])
        max1=r[i];
    }

    int y=max1+2;
     int arr[y];
    for(i=0;i<y;i++)
        arr[i]=0;

    for(i=0;i<n;i++)
    {
        arr[l[i]]++;
        arr[r[i+1]]--;
    }
    int prev=0,max=0;
    for(i=0;i<max1;i++)
    {
        if(prev+arr[i]>max)
            max=prev+arr[i];
        prev+=arr[i];
    }
    printf("%d",max);
}
