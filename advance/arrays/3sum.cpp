#include<bits/stdc++.h>
using namespace std;
    vector<vector<int>> brute_threeSum(vector<int>& nums) {
        set <vector<int>> st;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                       vector<int>temp={nums[i],nums[j],nums[k]};
                       sort(temp.begin(),temp.end());
                       st.insert(temp);
                    }
                }
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;


    }


    vector<vector<int>> better_threeSum(vector<int>& nums) {
       
        set <vector<int>> st;
        for(int i=0;i<nums.size();i++){
            set<int>hash;
            for(int j=i+1;j<nums.size();j++){
                int req=-nums[i]-nums[j];
                if(hash.find(req)!=hash.end()){
                    vector<int>temp={nums[i],nums[j],req};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hash.insert(nums[j]);

            }
        }

        return vector<vector<int>>(st.begin(),st.end());
    }


    vector<vector<int>> optimal_threeSum(vector<int>& nums) {
        int n=nums.size();
set<vector<int>>ans;
sort(nums.begin(),nums.end());
for(int left=0;left<n;left++){
    if(left>0 && nums[left]==nums[left-1])continue;

    int right=n-1,j=left+1;
    while(j<right){
        int sum=nums[left]+nums[j]+nums[right];
        if(sum>0){
            right--;
        }
        else if(sum<0){
            j++;
        }
        else{
            vector<int>temp={nums[left],nums[j],nums[right]};
            ans.insert(temp);

            j++;
            right--;
            while(j<right && nums[j]==nums[j-1])j++;
            while(j<right && nums[right]==nums[right+1])right--;
        }
    }
}
return vector<vector<int>>(ans.begin(),ans.end());
        
    }

    int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    
    // Create an instance of Solution class
    
   
    return 0;
}