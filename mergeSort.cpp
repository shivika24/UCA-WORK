#include<iostream>
#include<math.h>
using namespace std;
void mergeSort(int [],int,int);
void mergeAll(int [],int,int,int);
int inv=0;//inv=0;
int comp=0;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    //int runtime=count*log(count);
    cout<<endl<<"runtime is:"<<comp;
    cout<<endl<<"inversion:"<<inv;

}
void mergeSort(int arr[],int l,int r)
{
   // int inv=0;
    if(l<r)
    {
        int m=(r+l)/2;

    mergeSort(arr,l,m); //negligible
    mergeSort(arr,m+1,r);
    mergeAll(arr,l,m,r);
    }
   // return inv;
}
void mergeAll(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    //int inv=0;
   comp+=r-l;
    int i=0,j=0;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(i=0;i<n2;i++)
    {
        R[i]=arr[m+1+i];
    }
    i=0;j=0;int k=l;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
           // inv++;
        }
        else
        {
            inv+=m+1-i;
            arr[k]=R[j];
            j++;
           // count++;
        }
        k++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    //return inv;
}
