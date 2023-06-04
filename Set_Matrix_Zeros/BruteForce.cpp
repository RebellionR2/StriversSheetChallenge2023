// The Approach is to traverse over the matrix and when ever we encounter a Zero we will mark the whole row and column as -1 except the Zeros. 
// In Second traversal we will look for -1 and when ever we encounter -1 we will change it to 0
// This method will work only if our matrix doesn't have any negative elements.
// On LeetCode this code won't pass all test Case but con COde Studio it will work just fine.

#include <bits/stdc++.h>
void markRow(vector<vector<int>> &matrix,int i,int row,int col)   // Funtion for Marking Row
{
    for(int j=0; j<col; j++)
	{
		if(matrix[i][j]!=0)
		matrix[i][j]=-1;
	}
}

void markCol(vector<vector<int>> &matrix,int j,int row, int col)// Function for marking COl
{
	  for(int i=0; i<row; i++)
	{
		if(matrix[i][j]!=0)
		matrix[i][j]=-1;
	}

}

void setZeros(vector<vector<int>> &matrix)
{
	

	int row=matrix.size();
	int col=matrix[0].size();

	
	for(int i=0; i<row; i++)   // Traversing Matrix to find Zeros
	{
		for(int j=0; j<col; j++)
		{
            if(matrix[i][j]==0)
			{
				markRow(matrix,i,row,col);
				markCol(matrix,j,row,col);
			}			
		}
	}

	for(int i=0; i<row; i++)  // Traversing Array to find -1 and convert them to Zero.
	{
		for(int j=0; j<col; j++)
		{
                  if (matrix[i][j] == -1)
			      { 
                     matrix[i][j] = 0;
                  }
        }
    }

}

// As function is of Void type we need not to return anything that we martix was passed by Reference so that chnages will reflect in answer.
