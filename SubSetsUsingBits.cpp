#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    //now subset generation
    //for a n element array it has 2^n subsets including a null set
    //.'. generating them without the null set
    //we know that 1<<n = 2^n

    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}