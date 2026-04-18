#include<bits/stdc++.h>
using namespace std;


    void moveZeroesNotSoOptimal(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]!=0){
                        swap(nums[i],nums[j]);
                        break;
                    }
                }
            }

        }
    }

void moveZeroesOptimal(vector<int>& nums) {
    int i=-1,j=-1;
    for(i=0;i<nums.size();i++){
        if(nums[i]==0){
        j=i;
        break;
        }
    }
    
    for(int i=j+1;i<nums.size();i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
}
int main() {
    vector<int> nums = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};

    moveZeroesOptimal(nums);

    cout << "Array after moving zeroes: ";
    // Print the modified array
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}