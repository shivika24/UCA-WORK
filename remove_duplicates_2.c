#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array=");
    scanf("%d",&n);
    int arr[n];
    int i,j=0,k=0;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int count=1;
    for(i=1;i<=n;i++)
    {
        if(arr[i]!=arr[j])
        {
            if(count>=2)
            {
                arr[k]=arr[j];
                k++;
                arr[k]=arr[j];
                k++;
                count=1;
            }
            else if(count==1)
            {
                arr[k]=arr[j];
                k++;
                //count=1;
            }
            j++;
        }
        else
        {
            count++;
            j++;
        }
    }
    for(i=0;i<k;i++)
        printf("%d ",arr[i]);
}
