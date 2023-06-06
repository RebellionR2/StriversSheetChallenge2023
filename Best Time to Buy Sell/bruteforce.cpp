#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    
    int maxi=INT_MIN;
     int profit=0;
    for(int i=0; i<prices.size(); i++)
    {  
        for(int j=i+1; j<prices.size(); j++)
        {
            profit=prices[j]-prices[i];
            maxi=max(profit,maxi);
        }
        
    }
     
     if(maxi<0)
     return 0;
     
    return maxi;
}
