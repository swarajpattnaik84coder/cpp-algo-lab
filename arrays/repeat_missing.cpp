#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> Brute_findMissingRepeatingNumbers(vector<int> nums) {
        vector<int> ans(2);
        int count=0;
        for(int i=1;i<=nums.size();i++){
            count =0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==i)count++;

            }
            if(count==2)ans[0]=i;
            else if(count ==0)ans[1]=i;

        }

        return ans;
    }
};

class Solution {
public:
    vector<int> Better_findMissingRepeatingNumbers(vector<int> nums) {

        int hash[nums.size()+1]={0};
        int repeating=-1, missing=-1;

        for(int  i=0;i<nums.size();i++){    //TC: O(n)  SC: O(n)
            hash[nums[i]]++;
        }
        for(int i=1;i<nums.size()+1;i++){   // TC: O(n) 
            if(hash[i]==2)repeating =i;
            else if(hash[i]==0)missing=i;
        }

        return {repeating,missing};

    }
};

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {

        int n=nums.size();
        long long int S=0;
        int repeating=-1, missing=-1;
        for(int i=0;i<nums.size();i++){
            S+=nums[i];
        }
        long long int Sn=((long long int)n*(long long int)(n+1))/2;

        long long int S2=0;
        for(int i=0;i<nums.size();i++){
            S2+=((long long int)nums[i]*(long long int)nums[i]);
        }
        long long int S2n=((long long int)n*(long long int)(n+1)*(long long int)(2*n+1))/6;

        repeating =((S-Sn)+(S2-S2n)/(S-Sn))/2;
        missing=repeating-(S-Sn);

        return {(int)repeating,(int)missing};

    }
};