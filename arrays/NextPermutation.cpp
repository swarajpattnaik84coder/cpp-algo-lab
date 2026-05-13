#include<bits/stdc++.h>
using namespace std;


    void Optimal_nextPermutation(vector<int>& nums) {
        // Your code goes here
        
    int n=nums.size();
    int i=n-2;
    int ind=-1;
for(int i=n-2;i>=0;i--){
    if(nums[i]<nums[i+1]){
        ind=i;
        break;
    }
}
if(ind==-1){
    reverse(nums.begin(),nums.end());
    return;
}
int j=n-1;
while(j>ind){
    if(nums[j]>nums[ind]) break;
    j--;
}
swap(nums[ind],nums[j]);
reverse(nums.begin()+ind+1,nums.end());
return;
    }