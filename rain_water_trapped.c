#include<stdio.h>
 int main()
 {
     int n,k=0;
     scanf("%d",&n);
     int i,a[n],total=0;
     for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int max=a[0],index=-1;
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
           max=a[i];
           index=i;
        }

    }
    int j,max1=a[0];
    for(i=1;i<index;i++)
    {
        if(a[i]<=a[i-1])
        {
            if(max1>a[i-1])
            {
                //max1=a[i];
                total+=max1-a[i];
            }
            else
                total+=a[i-1]-a[i];
        }
        else if(max1>a[i])
            total+=max1-a[i];
        if(max1<a[i])
            max1=a[i];

    }
    max1=a[n-1];
    for(i=n-2;i>index;i--)
    {
        if(a[i+1]>=a[i])
        {

            if(max1>a[i+1])
            {
                //max1=a[i];
                total+=max1-a[i];
            }
            else
                total+=a[i+1]-a[i];
        }
        else if(max1>a[i])
            total+=max1-a[i];
        if(max1<a[i])
            max1=a[i];
    }
    printf("%d",total);

 }
