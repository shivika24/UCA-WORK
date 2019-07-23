#include<stdio.h>
int main()
{
    int n,k=0;
    printf("enter the size of array=");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        arr[i]=0;
        if(arr[i]!=0)
        {
            arr[k]=arr[i];
            k++;
        }
    }
    for(i=0;i<k;i++)
        printf("%d ",arr[i]);
}
