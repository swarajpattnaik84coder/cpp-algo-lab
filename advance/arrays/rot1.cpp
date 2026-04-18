#include<bits/stdc++.h>
using namespace std;
void rotateArrayByOne(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            swap(nums[i-1],nums[i]);
        }
    }


    int main() {
    
    vector<int> nums = {1, 2, 3, 4, 5};

    rotateArrayByOne(nums);

    for (int num : nums) {
        cout << num << " "; // Output the rotated array
    }

    return 0;
}