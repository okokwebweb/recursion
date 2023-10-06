// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

//only one subsequence printing
int NumberOfSubSequence(int ind,int arr[],int sum,int sumToBeFound,int n)
{

    //one more base case only in case of positive numbers
    if(sum>sumToBeFound)
    return 0;

    if(ind==n)
    {
        //if sum==sumToBeFound then only printing
        if(sum==sumToBeFound)
        {
            //if sum matches the return 1
            return 1;
        }
        
        //return 0 if sum doesnt match
        return 0 ;
    }

    //taking an element case
    
    //adding the ele to sum since taken
    sum+=arr[ind];

    //for all the cases where ele taken that is left hand side
    int l = NumberOfSubSequence(ind+1,arr,sum,sumToBeFound,n);
    
    
    //not taking the ele
    
    //removing the ele from the sum since not taken
    sum-=arr[ind];

    //for all the cases where not taken that is right hand side
    int r= NumberOfSubSequence(ind+1,arr,sum,sumToBeFound,n);
    
    return l+r;
}



int main()
{
    int arr[3]={1,1,1};
    int n=3;
    
    cout<<endl;
    int sum=2;
    int ans = NumberOfSubSequence(0,arr,0,sum,n);
    cout<<ans;
    
}