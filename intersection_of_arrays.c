#include<stdio.h>
int main()
{
    int m,n;
    printf("enter size of first array=");
    scanf("%d",&n);
    printf("enter size of second array=");
    scanf("%d",&m);
    int a[n],b[m],res[m+n];
    int i,j;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
        i=0;
        j=0;
        int k=0;
    while(i<n&&j<m)
    {
        if(a[i]<b[j])
            i++;
        else if(a[i]>b[j])
            j++;
        else
        {

            res[k]=a[i];
            k++;
            i++;
            j++;
        }
    }
    for(i=0;i<k;i++)
        printf("%d ",res[i]);

}
