// Here we first make a vector of vector with desiered number of Row and Col initalized to 1 and then we iterate over it from row index 2 and Col index 1 to col 
// index of size-1 in this manner we are skipping element which are needed to remain 1. while travering on matrix we are changing them to be sum of 2 
//elements from previous row 

#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> ans;
  for(int i=0; i<n; i++)
  {
    ans.push_back(vector<long long int>(i+1,1));
  }

  for(int i=2; i<ans.size(); i++)
  {
    for(int j=1; j<ans[i].size()-1; j++)
    {
       ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
    }
  }


  return ans;
}

