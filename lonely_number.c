#include<stdio.h>
int main()
{
    int n,k=0;
    printf("enter the size of array=");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        k=k^a[i];

    printf("lonely number=%d",k);
}
