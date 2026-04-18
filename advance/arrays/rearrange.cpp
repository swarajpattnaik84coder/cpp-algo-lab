#include<bits/stdc++.h>
using namespace std;
    
    vector<int> brute_rearrangeArray(vector<int>& nums) {

        vector<int>pos,neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size()/2;i++){
            nums[2*i+1]=pos[i];
            nums[2*i]=neg[i];
        }
        return nums;
    }
    

    vector<int> optimal_rearrangeArray(vector<int>& nums) {
        
        vector <int>ans(nums.size());
        int pos=0,neg=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[pos]=nums[i];
                pos+=2;
            }
            if(nums[i]<0){
                ans[neg]=nums[i];
                neg+=2;
            }
        }
        return  ans;

    }
