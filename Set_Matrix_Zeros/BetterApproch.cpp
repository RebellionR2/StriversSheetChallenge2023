// The Brute Force Approch Assumes that there will be no -1 in  matrix so it will fail if matrix have -1. 
// To solve this problem we will take 2 Vectors names row and col initailized to 0 and then we will traverse over the matrix and whenever
// we encounter the zero we will mark the row and col at those index as 1
// When we traverse again we will keep checking Row and COl for and if encountered we will set that element to Zero.
// Disadvantage of this method is that it need extra Space 


#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{

	vector <int> row(matrix.size(),0);
    vector <int> col(matrix[0].size(),0);

	for(int i=0; i<matrix.size(); i++)
	{
		for(int j=0; j<matrix[i].size(); j++)
		{
			if(matrix[i][j]==0)
			{
				row[i]=1;
				col[j]=1;
			}
		}
	}	

	for(int i=0; i<matrix.size(); i++)
	{
		for(int j=0; j<matrix[i].size(); j++)
		{
			if(col[j] || row[i] )
			{
				matrix[i][j]=0;
			}
		}
	}	      

}
