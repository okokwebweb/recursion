//We can take any element only once

#include<bits/stdc++.h>
using namespace std;

//here we pass a sorted vector into the function ie the vec v is sorted.

void Combination_2(int ind,vector<int> &v,vector<int> &temp,int target,vector<vector<int> > &finalAns)
{
    //base case
    //if target ==0 then push into the finalAns and sidha return

    if(target==0)
    {
        finalAns.push_back(temp);
        return;
    }

    //checking for all the possibilities all at once and if two consecutive ele are same then only the 1st one is taken and the rest are not passed

    for(int i=ind;i<v.size();i++)
    {
        if((i>ind && v[i]==v[i-1]))
        continue;

        //if the value v[i] is greater then the target then break since there is no smaller element in the aage waala vector since the vec is sorted.
        if(v[i]>target)
        break;

        temp.push_back(v[i]);
        //here call using 'i' and not 'ind' since for every element this is done.
        Combination_2(i+1,v,temp,target-v[i],finalAns);
        temp.pop_back();

    }
}


void findCombination(int ind, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds) {
  if (target == 0) {
    ans.push_back(ds);
    return;
  }
  for (int i = ind; i < arr.size(); i++) {
    if (i > ind && arr[i] == arr[i - 1]) continue;
    if (arr[i] > target) break;
    ds.push_back(arr[i]);
    findCombination(i + 1, target - arr[i], arr, ans, ds);
    ds.pop_back();
  }
}