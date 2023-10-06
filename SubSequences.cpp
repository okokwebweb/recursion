// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

//call by reference of the vector v imp!

void printSubs(int ind,int arr[],vector<int> &ds,int n)
{
    if(ind==n)
    {
        // printing the vector
        if(ds.size()==0) cout<<"{}";
        for(auto ele:ds)
        cout<<ele<<" ";
        cout<<endl;
        return;
    }

    //every ele has 2 options: present / absent

    //including a particlur element
    ds.push_back(arr[ind]);
    printSubs(ind+1,arr,ds,n);

    //removing that ele that is excluding the ele
    ds.pop_back();
    printSubs(ind+1,arr,ds,n);
}

int main()
{
    int arr[3]={1,2,3};
    int n=3;
    vector<int> v;
    printSubs(0,arr,v,n);
    
}