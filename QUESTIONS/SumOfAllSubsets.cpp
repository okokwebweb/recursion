#include <bits/stdc++.h>
using namespace std;

void SubSetSums(int index,int size, vector<int> &v ,int sum,vector<int> &ans)
{
    if(index==size)
    {
        //cout<<"here"<<endl;
        //cout<<sum<<endl;
        ans.push_back(sum);
        return;
    }

    //taking the element
    sum+=v[index];
    SubSetSums(index+1,size,v,sum,ans);

    //not taking the element
    sum-=v[index];
    SubSetSums(index+1,size,v,sum,ans);

    return;
}

int main()
{
    vector<int> v={3,1,2};
    vector<int> ans;
    SubSetSums(0,3,v,0,ans);
    sort(ans.begin(),ans.end());
    for(auto it:ans)
    cout<<it<<" ";
    cout<<endl;
}