
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {

for(int k=0;k<nums.size();k++){
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                swap(nums[i],nums[i-1]);
            }
        }}
        return nums;
    }
    
};


int main() {
    // Create an instance of solution class
    Solution solution;
    
    vector<int> nums = {13, 46, 24, 52, 20, 9};
    
    cout << "Before Using Insertion Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Function call for insertion sort
    nums = solution.insertionSort(nums);

    cout << "After Using Insertion Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
