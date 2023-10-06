#include <bits/stdc++.h>
using namespace std;

typedef vector< int > vi; 

// fucking send the sorted array into the function that is v sould be sorted!!!!

void UniqueSubsetsOnly(int index,int size, vi &v , vi &temp, vector<vector<int>> &ans)
{

    //here is the catch
    //whenever the recusion called push that vector into the ans since that will be one of the subsets
    
    //basically we are generating those subsets which are unique like of size 1,2,3,...
    //we sendthe 1st ele and then check if the nect ele is same then do no end same as the case of 2nd combinational sum

    //push during all reccusive calls!

    //we are pushing subsets of all the sizes which are unique that is sabse pehle we send of size 1 then 2 then 3 and so on. 
    ans.push_back(temp);


    if(index==size)
    {
        return;
    }

    for(int i=index;i<size;i++)
    {
        if(i>index && v[i]==v[i-1])
        continue;

        temp.push_back(v[i]);
        UniqueSubsetsOnly(i+1,size,v,temp,ans);
        temp.pop_back();
    }
}

int main()
{
    vi v={4,4,1,4,4};

    
    //SEND THE SORTED ARRAY!!!!!

    sort(v.begin(),v.end());
    vector<vi> ans;
    vi temp;
    UniqueSubsetsOnly(0,v.size(),v,temp,ans);

    sort(ans.begin(),ans.end());

}