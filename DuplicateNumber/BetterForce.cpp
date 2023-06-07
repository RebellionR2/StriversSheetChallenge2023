#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.

	unordered_map <int,int> hash;

	for(int i=0; i<n; i++)
	{
		hash[arr[i]]++;
	}
	for(auto i:hash)
	{
		if(i.second>1)
		return i.first;
	}

	return -1;
}
