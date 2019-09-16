#include<stdio.h>
int a[20];
int size=0;
void swap(int i,int j)
{
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
void insert(int x)
{
a[size++]=x;
swim(size-1);
}
void swim(int k)
{
  if(k==0)
        return;
  int p=k/2;
  if(a[p]<a[k])
    swap(p,k);
  swim(p);
}
void sink(int k)
{
  if(k>=size)
        return;
  int fc=2*k;
  int sc=2*k+1;
  int max=k;
  if(fc<size&&a[fc]>a[max])
    max=fc;
  if(sc<size&&a[sc]>a[max])
    max=sc;
  if(k!=max)
  {
  swap(k,max);
  sink(max);
  }
}
int get_max()
{
   return a[0];
}
int del_max()
{
 int k=get_max();
 swap(0,size-1);
 size--;
 sink(0);
 return k;
}
int main()
{
    insert(9);
    insert(3);
    insert(8);
    insert(2);
    insert(7);
    insert(5);
    insert(-1);
    insert(0);
    printf("%d\n",get_max());
    printf("%d\n",del_max());
    printf("%d",get_max());
}
