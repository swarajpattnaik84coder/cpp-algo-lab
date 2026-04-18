#include<bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
    int freq=0,final_freq=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                freq++;
                final_freq=max(final_freq,freq);
            }
            
            else{
                
                freq=0;
            }
        }
        return final_freq;
    }
    int main() {
    
    vector<int> nums = {1, 1, 0, 0, 1, 1, 1, 0};

    int ans = findMaxConsecutiveOnes(nums);

    cout << "The maximum consecutive 1's are " << ans << endl;
    return 0;
}