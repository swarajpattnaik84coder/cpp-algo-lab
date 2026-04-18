#include<bits/stdc++.h>
using namespace std;


    int removeDuplicates(vector<int>& nums) {
        set<int>hash;
        for(int i=0;i<nums.size();i++){
            hash.insert(nums[i]);
        }
        int j=0;
        for(auto var: hash){
            nums[j]=var;
        j++;
            }
        return hash.size();
    }
    int removeDuplicatesOptimal(vector<int>& nums){

        int i=0,j=-1;
        for(j=0;j<nums.size();j++){
            if(nums[j]!=nums[i]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
int main(){
   
    vector<int>nums={1,1,2,3,3,4,5,5};
   removeDuplicates(nums);
   for(auto i: nums){
    cout<<i<<" ";
   }

    return 0;
}