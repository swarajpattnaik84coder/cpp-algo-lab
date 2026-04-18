#include<bits/stdc++.h>
using namespace std;
    
    
    
    vector<int> leaders(vector<int>& nums) {
      vector<int>ans;
            int n=nums.size();
                  int maxi=nums[n-1];
                 ans.push_back(maxi);
                for(int i=n-1;i>=0;i--){
                  if(nums[i]>maxi){
               ans.push_back(nums[i]);
                maxi=nums[i];
    }                                                    
   }
                     reverse(ans.begin(),ans.end());
                    return ans;
    }
