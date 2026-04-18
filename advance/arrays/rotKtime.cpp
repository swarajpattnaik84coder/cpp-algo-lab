#include<bits/stdc++.h>
using namespace std;

void fun(vector<int> &arr,int k){
int rot=k;
if (k>arr.size()){
rot=k%arr.size();
}
vector<int> temp(2*arr.size());
for(int i=0;i<arr.size();i++){
temp[i]=arr[i];
}
for(int i=0;i<arr.size();i++){
temp[i+arr.size()]=arr[i];
}
for(int i=0;i<arr.size();i++){
arr[i]=temp[i+rot];
}

}

void improved(vector<int> &arr,int k){
k=k%arr.size();
reverse (arr.begin(),arr.begin()+k);
reverse(arr.begin()+k,arr.end());
reverse(arr.begin(),arr.end());
}

void improvedRight(vector<int> &arr,int k){
k=k%arr.size();
reverse (arr.begin(),arr.end()-k);
reverse(arr.end()-k,arr.end());
reverse(arr.begin(),arr.end());
}

void reversearray(vector<int> &arr,int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void optimal(vector<int> &arr,int k){
    k=k%arr.size();
reversearray(arr,0,k-1);
reversearray(arr,k,arr.size()-1);
reversearray(arr,0,arr.size()-1);
}

    int main() {
    vector<int>arr = {1, 2, 3, 4, 5, 6};
    int k = 3;

    cout << "Initial array: ";
     for(int val : arr) {
        cout << val << " ";
    }
    cout << endl;
    
    optimal(arr,3);

    cout << "Array after rotating elements by " << k << " places: ";
    for(int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}