#include<stdio.h>
int main()
{
    int n,i;
    printf("enter size of array=");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int max=arr[0],sum=arr[0];
    for(i=1;i<n;i++)
    {
        if(sum+arr[i]>arr[i])
            sum+=arr[i];
        else
            sum=arr[i];
        if(max<sum)
            max=sum;
    }
    printf("maximum sum==%d",max);

}
