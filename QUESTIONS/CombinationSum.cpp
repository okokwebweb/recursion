//We can take any element any number of times

#include<bits/stdc++.h>
using namespace std;

void combinationSum(int index,int sizeOfv,vector<int> &v,int target,vector<int> &temp,vector<vector<int>> &finalAns)
{
    //base cases

    //1st case
    // if target ==0 then sidha insert into finalAns and return

    if(target==0)
    {
        finalAns.push_back(temp);
        return;
    }

    //2nd base case
    if(index==sizeOfv)
    {
        return;
    }
    //base cases khatam!

    //checking if we can take the element
    if(v[index]<=target)
    {
        //then take that elemnt and push into temp
        temp.push_back(v[index]);
        //again staying at the same index since we can take multiple times
        //since taking therefore subtracting the value of that particular element!
        combinationSum(index,sizeOfv,v,target-v[index],temp,finalAns);

        //popping is necessary since aage ke liye same temp chala jaayega
        temp.pop_back();

    }

    //not taking a particular element of that index
    combinationSum(index+1,sizeOfv,v,target,temp,finalAns);

    return;


}


int main()
{
    vector<int> v={2,3,6,7};
    vector<int> temp;
    int target=7;
    vector< vector<int>> finalAns;
    combinationSum(0,4,v,target,temp,finalAns);
    for(auto it:finalAns)
    {
        for(auto in:it)
        cout<<in<<" ";
        cout<<endl;
    }
}