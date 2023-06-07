#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
   
    unordered_map <int,int> hash;
    vector<int> ans;
    int n=arr.size();
   for (int i=0; i<n; i++)
   {
	   hash[arr[i]]++;
   }
for(auto i:hash)
{
	if(i.second>n/3)
	ans.push_back(i.first);
}

return ans;

}
