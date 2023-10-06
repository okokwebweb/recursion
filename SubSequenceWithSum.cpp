// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

//basically same as the subsequences one but here only sum is passed

//call by reference for the vector ds
void printSubsWithSum(int ind,int arr[],vector<int> &ds,int sum,int sumToBeFound,int n)
{
    if(ind==n)
    {
        //if sum==sumToBeFound then only printing
        if(sum==sumToBeFound)
        {
            for(auto it:ds)
            cout<<it<<" ";
            cout<<endl;
        }
        return ;
    }

    //taking an element case
    ds.push_back(arr[ind]);
    //adding the ele to sum since taken
    sum+=arr[ind];
    printSubsWithSum(ind+1,arr,ds,sum,sumToBeFound,n);
    
    //not taking the ele
    ds.pop_back();
    //removing the ele fromt the sum since not taken
    sum-=arr[ind];
    printSubsWithSum(ind+1,arr,ds,sum,sumToBeFound,n);
}


//only one subsequence printing
bool printSubWithSum(int ind,int arr[],vector<int> &ds,int sum,int sumToBeFound,int n)
{
    if(ind==n)
    {
        //if sum==sumToBeFound then only printing
        if(sum==sumToBeFound)
        {
            for(auto it:ds)
            cout<<it<<" ";
            cout<<endl;
            return true;
        }
        return false ;
    }

    //taking an element case
    ds.push_back(arr[ind]);
    //adding the ele to sum since taken
    sum+=arr[ind];
    if(printSubWithSum(ind+1,arr,ds,sum,sumToBeFound,n)==true)
    return true;
    
    //not taking the ele
    ds.pop_back();
    //removing the ele fromt the sum since not taken
    sum-=arr[ind];
    if(printSubWithSum(ind+1,arr,ds,sum,sumToBeFound,n)==true)
    return true;

    return false;
}



int main()
{
    int arr[3]={1,2,1};
    int n=3;
    vector<int> v;
    cout<<endl;
    int sum=2;
    printSubsWithSum(0,arr,v,0,sum,n);
    
}