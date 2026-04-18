#include<bits/stdc++.h>

using namespace std;


void mergesort(int low,int high, vector<int>&arr){

    if(low>=high) return ;

    int mid =(low+high)/2;
    mergesort(low,mid,arr);
    mergesort(mid+1,high,arr);
    merge(low,mid,high,arr);

}

void merge(int low,int mid,int high,vector<int>&arr){

    vector<int>temp;
    int left=low,right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else if(arr[left]>arr[right]){
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }

}







int main(){
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = arr.size();

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Function call to sort the array
    mergesort(0,n-1,arr);

    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

/*

TC: 





I wrote:
if(arr[left] < arr[right])
and then
if(arr[left] > arr[right])
⚠ This is wrong because:
I used two separate if statements.
If first condition runs, left increments.
Then second condition checks again → may cause out-of-bounds error.

I wrote:
for(int i=low;i<high;i++)
BUT HIGH IS index so "=" is required

the order of merge and mergesort function matters because merge function is called inside mergesort function, so merge function should be defined before mergesort function otherwise it will give an error that merge function is not defined.
solution: advance declaration
class formation where Order does NOT matter because:
The compiler sees all member declarations at once.
*/