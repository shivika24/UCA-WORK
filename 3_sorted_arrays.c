#include<stdio.h>
int minimum(int a,int b,int c)
{
    int k=a<b?(a<c?a:c):(b<c?b:c);
    return k;
}
int maximum(int a,int b,int c)
{
int k=a>b?(a>c?a:c):(b>c?b:c);
return k;
}
int main()
{
    int x,y,z,p,q,r;
    int i,j,k,diff;
    printf("enter size of first array=");
    scanf("%d",&x);
    int a[x];
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    printf("enter size of second array=");
    scanf("%d",&y);
    int b[y];
    for(j=0;j<y;j++)
        scanf("%d",&b[j]);
    printf("enter size of third array=");
    scanf("%d",&z);
    int c[z];
    for(k=0;k<z;k++)
        scanf("%d",&c[k]);
        i=0,j=0,k=0;
        int mini=1234,min=0,max=0;
    while(i<x&&j<y&&k<z)
    {
      min=minimum(a[i],b[j],c[k]);
      max=maximum(a[i],b[j],c[k]);
      //printf("%d %d",min,max);
      diff=max-min;
      if(mini>diff)
      {
       mini=diff;
      }
      if(min==a[i])
        i++;
      else if(min==b[j])
        j++;
      else
        k++;
    }
    printf("%d",mini);
}
