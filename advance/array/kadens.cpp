#include<iostream>
#include<vector>
#include <climits>
using namespace std;


    int Optimal_maxSubArray(vector<int>& nums) {
        
        long long global_max = LLONG_MIN;
        long long current_max = 0;

        for(int i=0;i<nums.size();i++){
            current_max=nums[i]+current_max;
            global_max=max(global_max,current_max);
            if(current_max < 0){
                current_max=0;         
            }
        }
/*Using `INT64_MIN` with an `int` variable causes narrowing/overflow because a 64-bit value cannot fit into 32-bit `int`. In Kadane’s Algorithm, this especially breaks all-negative arrays, since `global_max` stores the only valid negative answer. Always match types properly: `INT_MIN` for `int`, `LLONG_MIN` for `long long`. But works fgor all positive arrays and mixed arrays, just fails for all negative arrays.
*/
return global_max;

    }


    void FollowUp_maxSubArray(vector<int>& nums) {
        
        long long global_max = LLONG_MIN;
        long long current_max = 0;
        pair <int,int> ans;
        int start=0;

        for(int i=0;i<nums.size();i++){
            current_max=nums[i]+current_max;
            if(global_max<current_max){
                global_max=current_max;
                ans.first=start;
                ans.second=i;
            }
            if(current_max < 0){
                current_max=0;
                start=i+1;
            }
        }

        for(int i=ans.first;i<=ans.second;i++){
            cout<<nums[i]<<" ";
        }



}