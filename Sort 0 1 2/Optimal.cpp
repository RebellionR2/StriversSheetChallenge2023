#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int low=0,med=0;
   int high=n-1;

   while(med<=high)
   {
      if(arr[med]==0)
      {
         swap(arr[med],arr[low]);
         low++;
         med++;
      }
      else if (arr[med]==1)
      {
         med++;
      }
      else {
         swap(arr[med],arr[high]);
         high--;
      }
   }
   
