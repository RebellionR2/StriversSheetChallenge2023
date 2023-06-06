// Here we are finding all Possible subarray sum and returning max from it.


#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    int maxi=INT_MIN;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int sum=0;
            for(int k=i; k<=j; k++)
            {
               sum+=arr[k];
            }
            maxi=max(maxi,sum);
        }
    }
     
     if(maxi<0)
     return 0;
    return maxi;
}
