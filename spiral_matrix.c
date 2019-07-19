#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array=");
    scanf("%d",&n);
    int a=0,b=n-1,c=n-1,d=0,count=1;
    int i,j,arr[n][n];
    while(a<=c&&d<=b)
    {
    for(i=a;i<=c;i++)
        arr[a][i]=count++;
    a++;
    for(i=a;i<=b;i++)
        arr[i][b]=count++;
    b--;
    for(i=b;i>=d;i--)
        arr[c][i]=count++;
    c--;
    for(i=c;i>d;i--)
        arr[i][d]=count++;
    d++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


}
