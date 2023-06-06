// First we traverse from 2nd last element of the given array and find the element smaller than our current element and store its index. After this 
//we will again traverse the array from end and look for element greater than out element at our stored  index and we swap them after that we just reverse the 
// elements of array from index+1 to end of array.

#include <bits/stdc++.h> 

vector<int> nextPermutation(vector<int> &permutation, int n)
{
   int index=-1;
   for(int i=n-2; i>=0; i--)
   {
       if(permutation[i]<permutation[i+1])
       {
           index=i;
           break;
       }
   }
   if(index==-1)
   {
     reverse(permutation.begin(),permutation.end());
     return permutation;
   }
   

   for(int i=n-1; i>index; i--)
   {
       if(permutation[i]>permutation[index])
       {
           swap(permutation[i],permutation[index]);
           break;
       }
   }

   reverse(permutation.begin()+index+1,permutation.end());

   return permutation;
   
}
