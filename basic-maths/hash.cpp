
#include<bits/stdc++.h>
using namespace std;
int getmax(int n,int arr[]){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n]; 
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   


    int hash[getmax(n,arr)+1]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int key,q;
    cout<<"\nenter no. of queries: ";
    cin>>q;
    while(q--){
    cout<<"\nEnter key to be searched: ";
    cin>>key;
    if(key>getmax(n,arr)){
        cout<<"\nKey not found";
    }
   else{
    cout<<"\nFrequency of "<<key<<" is "<<hash[key];
   }
}
return 0;
}
/*
time complexity: O(q+n)
when array size goes to pow(10,3) --> time limit exceed error
inside main function max possible size alloted to array is 
in global declaration pow(10, ) is alloted to an array

*/