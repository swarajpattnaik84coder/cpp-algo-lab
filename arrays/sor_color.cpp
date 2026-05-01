#include<iostream>
#include<vector>
using namespace std;


    void Optimal_sortZeroOneTwo(vector<int>& nums) {
        
        int low =0,mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
                /*why mid++? because nums[low] was already checked*/
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
                /*why not mid++, because nums[high] could be 0, 1, or 2*/
            }
        }
    }

        void Better_sortZeroOneTwo(vector<int>& nums) {
        
        int cnt0=0,cnt1=0,cnt2=0;
        for(int i=0;i<=nums.size()-1;i++){
            if(nums[i]==0)cnt0++;
            else if(nums[i]==1)cnt1++;
            else cnt2++;
        }
        for(int i=0;i<cnt0;i++){
            nums[i]=0;
        }
        for(int i=cnt0;i<cnt1+cnt0;i++){
            nums[i]=1;
        }
        for(int i=cnt0+cnt1;i<nums.size();i++){
            nums[i]=2;
        }
        
    }


    int main() {
    vector<int> nums = {0, 2, 1, 2, 0, 1};
    
    Optimal_sortZeroOneTwo(nums);
    
    // Print the array elements after sorting
    cout << "After sorting:" << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}