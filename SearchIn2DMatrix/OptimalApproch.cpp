bool searchMatrix(vector<vector<int>>& mat, int target) {
         
      int start=0; 
      int end=mat.size()*mat[0].size()-1;

      while(start<=end)
      {
          int mid=start+(end-start)/2;
          int row=mid/mat[0].size();
          int col=mid%mat[0].size();
          if(mat[row][col]==target)
          return true;

          else if(mat[row][col]<target)
          start=mid+1;

          else 
          end=mid-1;
      }   

return false;
}
