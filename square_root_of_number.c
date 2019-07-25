#include<stdio.h>
int check(int n)
{
    int l=0,r=n,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(mid*mid>n)
        r=mid-1;
        else if(mid*mid<n)
        l=mid+1;
        else
        {
         return mid;
        }
    }
    return r;
}
int main()
{
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    int k=check(n);

    printf("%d",k);
}
