#include<bits/stdc++.h>
using namespace std;

    vector<int> brute(vector<int>& nums, int target) {
        
for(int i=0;i<nums.size();i++){
    for(int j=i+1;j<nums.size();j++){
        if(nums[i]+nums[j]==target){
            return {i,j};

}    }
}
    }


    vector<int> better(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
    for(int i=0;i<nums.size();i++){
        int req=target - nums[i];
        if(mpp.find(req)!=mpp.end()){
            return {mpp[req],i};
        }
        mpp[nums[i]]=i;
    }

    }


    vector<int> optimal(vector<int>& nums, int target) {
        /*cant use map because it sorts the elment and original indices are not preserved*/
        vector<pair<int,int>>temp;
        for(int i=0;i<nums.size();i++){
            temp.push_back({nums[i],i});
        }

    sort(temp.begin(),temp.end());
    int left=0,right=temp.size()-1;
    while(left<right){
        if(temp[left].first+temp[right].first==target){
            return {temp[left].second,temp[right].second};
        }
        else if(temp[left].first+temp[right].first>target){
            //decrement req
            right--;
        }
        else{
            //increment req
            left++;
        }
    }
    }