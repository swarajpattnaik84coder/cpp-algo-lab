#include<bits/stdc++.h>
using namespace std;

int brute(int n,int arr[]){
    int ele=0,max_count =0,visited[10000+1]={0};
        
        for(int i=0;i<n;i++){
            if(visited[arr[i]]==0){
                visited[arr[i]]++;
                int count=0;
                for(int j=0;j<n;j++){
                    if(arr[j]==arr[i]){
                        count++;
                    }
                }
                if(max_count<count){
                    max_count=count;
                    ele=arr[i];
                }
                else if(max_count==count && arr[i]<ele){
                    ele=arr[i];
                    }
                }
            }           
        return ele;
    }

int opitmal(int n,int arr[]){
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    int hash[maxi+1]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int ele=arr[0],count=0;
    for(int i=0;i<n;i++){
        if(hash[arr[i]]>count){
            count =hash[arr[i]];
            ele=arr[i];
        }
        else if(hash[arr[i]]==count && arr[i]<ele){
            ele=arr[i];
        }
    }
    return ele;
}


int main(){







    return 0;
}