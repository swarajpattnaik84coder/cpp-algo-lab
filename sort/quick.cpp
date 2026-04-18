#include<bits/stdc++.h>
using namespace std;

int partition(int low,int high,vector<int>&arr){

    int i=low,j=high;
    int pivot=arr[low];//choosing first element as pivot
    while(i<j){
        
        while(arr[i]<=pivot && i<high){//<= pivot will remain on its left
            i++;
        }
        while(arr[j]>pivot && j>low){//>pivot will remain on its right
            j--;
        }
        if(i<j)swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(int low,int high,vector<int>&arr){

    if(low>=high)return;
    int partition_index=partition(low,high,arr);

    quicksort(low,partition_index-1,arr);
    quicksort(partition_index+1,high,arr);
}


int main() {
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Function call to sort the array using quick sort
    quicksort(0,n-1,arr);

    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
time complexity for partition function is O(n)
time complexity for quick sort excluding the partition function is O(log n)
time complexity for quick sort is O(n log n) in average case and O(n^2) in worst case
space complexity is O(log n) due to recursion stack
*/