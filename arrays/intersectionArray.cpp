#include<bits/stdc++.h>
using namespace std;


vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
    vector<int>ans;
    int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
            }
            if(nums1[i]<nums2[j])i++;
            else if(nums1[i]>nums2[j])j++;
            else if(nums1[i]==nums2[j]){
                i++;
                j++;}
    }
    return ans;

}

int main() {
    vector<int> nums1 = {1, 2, 3, 3, 4, 5, 6, 7};
    vector<int> nums2 = {3, 3, 4, 4, 5, 8};


    // Get intersection of nums1 and nums2 using class method
    vector<int> inter = intersectionArray(nums1, nums2);

    cout << "Intersection of nums1 and nums2 is:" << endl;
    for (int val : inter) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}