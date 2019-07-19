#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp;
    cout<<"enter size of array=";
    cin>>n;
    int a[n][n];
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
           temp=a[i][j];
           a[i][j]=a[j][i];
           a[j][i]=temp;
        }
    }

   for(i=0;i<n;i++)
    {
        for(j=0;j<n/2;j++)
        {
            swap(a[i][j],a[i][n-1-j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}
