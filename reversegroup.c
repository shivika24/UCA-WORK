#include<stdio.h>

void swap(int *start,int *end)
{
int temp;
temp=*start;
*start=*end;
*end=temp;
}
int main()
{
 int n,k;
 printf("enter size of array=");
 scanf("%d",&n);
 int a[n];
 printf("enter the size of group=");
 scanf("%d",&k);
 int i,j,p;
       for(p=0;p<n;p++)
       {
 	   scanf("%d",&a[p]);
       }
 for(i=0;i<n;i+=k)
 	{
 		if((i+k)<=n)
 		{
 		   for(j=0;j<k/2;j++)
 		   {
 		   	swap(&a[j+i],&a[i+k-1-j]);
 		   }
 		}
 		else
 		{
 		   for(j=0;j<(n-i)/2;j++)
 		   {
 		   	swap(&a[j+i],&a[n-1-j]);
 		   }
 		}
 	}
 	for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
