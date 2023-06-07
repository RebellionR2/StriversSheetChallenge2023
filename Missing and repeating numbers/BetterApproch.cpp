#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	unordered_map <int,int> hash;
    int sum=0;
	int natural_sum=(n*(n+1))/2;
	for(int i=0; i<arr.size(); i++)
	{   
		sum+=arr[i];
		hash[arr[i]]++;
	}
	int repeating_number=0;
	for(auto i:hash)
	{
		if(i.second>1)
		{
			  repeating_number=i.first;
			  break;
		}
	}
	sum=sum- repeating_number;

        return { natural_sum - sum,repeating_number};
}

