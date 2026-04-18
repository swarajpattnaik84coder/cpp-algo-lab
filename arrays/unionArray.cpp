#include<bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
int i=0,j=0;
while(i<nums1.size() && j<nums2.size()){
    
    if(nums1[i]<=nums2[j]){
        if(ans.empty()||ans.back()!=nums1[i])
            ans.push_back(nums1[i]);
        i++;
        }
    else{
        if(ans.empty()||ans.back()!=nums2[j])
            ans.push_back(nums2[j]);
        j++;
        
    }
    
}

    while(i<nums1.size()){
        if(ans.empty()||ans.back()!=nums1[i]){
            ans.push_back(nums1[i]);
        }
        i++;
    }
    while(j<nums2.size()){
        if(ans.empty()||ans.back()!=nums2[j]){
            ans.push_back(nums2[j]);
        }
        j++;
    }


    return ans;
}

    

    int main() {
    // Initialize the arrays
    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> nums2 = {2, 3, 4, 4, 5, 11, 12};
    vector<int> Union = unionArray(nums1, nums2);
    
    /* Get the union of nums1 and 
    nums2 using the class method*/
   
    
    // Output the result
    cout << "Union of nums1 and nums2 is:" << endl;
    for (int val : Union) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}