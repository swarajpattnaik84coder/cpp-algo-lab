#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<map>
#include<algorithm>
using namespace std;




    vector<int> better_majorityElementTwo(vector<int>& nums) {
        vector<int> ans;
       map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                mp[nums[i]]++;
            }
            else{
                mp[nums[i]]=1;
            }

        }
        for(auto i: mp){
            if(i.second>nums.size()/3){
                ans.push_back(i.first);
            }
        }
        return ans;

        }
 
        class Solution {
public:
    vector<int> brute_majorityElementTwo(vector<int>& nums) {
        vector <int> ls;

        for (int  i=0;i<nums.size();i++){
            if(ls.size()!=2 && (find(ls.begin(),ls.end(),nums[i])==ls.end())){
                int count=0;
            for(int j=0;j<nums.size();j++){  
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count>nums.size()/3){
                    ls.push_back(nums[i]);
                }
            }
        
        }
        return ls;
    }
};

class Solution {
public:
    vector<int> Optimal_majorityElementTwo(vector<int>& nums) {
        vector<int>ans;
        int ele1=-1,ele2=-1;
        int count1=0,count2=0;
        for(int i=0;i<nums.size();i++){
            if(count1==0 && ele2!=nums[i]){
                ele1=nums[i];
                count1=1;
            }      
            else if(count2==0 && ele1!=nums[i]){
                ele2=nums[i];
                count2=1;
            }     
            else if(nums[i]==ele1)count1++;
            else if(nums[i]==ele2)count2++;
            else{count1--;
            count2--;
        }                  
        }
            int cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele1)cnt1++;
            if(nums[i]==ele2)cnt2++; 
        }

       if(cnt1>nums.size()/3)ans.push_back(ele1);
       if(cnt2>nums.size()/3 && ele1!=ele2)ans.push_back(ele2);   
         return ans;
        

    }
};