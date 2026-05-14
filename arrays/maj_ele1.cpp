#include<iostream>
#include<vector>
using namespace std;
    int majorityElement(vector<int>& nums) {


        int n=nums.size();
        int count=0;
        int ele=-1;
        for(int i=0;i<n;i++){
        if(count==0){
        ele=nums[i];
        count=1;
        } 
        else if(nums[i]!=ele){
        count--;}
        else{
        count++;}
     }
     int cnt=0;
     for(int i=0;i<n;i++){
     if(nums[i]==ele){
     cnt++;}}
     if(cnt>n/2){
     return ele;}
return-1;

    }