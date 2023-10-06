#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

void permutation(vi &temp,vi &v,int size,vector<vi> &ans,vi &check)
{
    if(temp.size()==size)
    {
        ans.push_back(temp);
        return;
    }

    for(int i=0;i<size;i++)
    {
        if(check[i]==1)
        continue;

        //taking that element that is already not been taken
        check[i]=1;
        temp.push_back(v[i]);
        permutation(temp,v,size,ans,check);

        //not taking that element
        check[i]=0;
        temp.pop_back();
    }
}

int main()
{
    vi v={1,2,3};
    vi temp;
    vector<vi> ans;
    vi check(3,0);
    permutation(temp,v,3,ans,check);
    for(auto i:ans)
    {
        for(auto j:i)
        cout<<j<<" ";
        cout<<endl;
    }
}