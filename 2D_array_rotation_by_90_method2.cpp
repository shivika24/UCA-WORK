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

    for(i=0;i<n/2;i++)
    {
        for(j=i;j<n-1-i;j++)
        {
        temp=a[i][j];
        a[i][j]=a[n-1-j][i];
        a[n-1-j][i]=a[n-1-i][n-1-j];
        a[n-1-i][n-1-j]=a[j][n-1-i];
        a[j][n-1-i]=temp;
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
