#include<stdio.h>
int main()
{
    int n;
    printf("enter array size=");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int elem;
    printf("enter value to find lower bound=");
    scanf("%d",&elem);
    int l=0,r=n-1,mid;
    while(l<r)
    {
        mid=(l+r)/2;
        if(a[mid]<elem)
            l=mid+1;
        else if(a[mid]>=elem)
            r=mid;
    }
    printf("%d",a[mid]);


}
