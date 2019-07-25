#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
    return ( *(int*)a - *(int*)b );
}
int main()
{
int n;
printf("enter value of n=");
scanf("%d",&n);
int i;
int a[n];
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),cmp);
int target;
printf("enter value of target=");
scanf("%d",&target);
i=0;
int j=0,k=0,min=a[0]+a[1]+a[n-1];
for(i=0;i<n-2;i++)
{
    j=i+1;
    k=n-1;
    while(j<k)
    {
    if(abs(min-target)>abs(a[i]+a[j]+a[k])-target)
        min=a[i]+a[j]+a[k];
    if(a[i]+a[j]+a[k]>target)
     k--;
    else
    j++;
    }
}
printf("%d",min);


}
