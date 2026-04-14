#include<bits/stdc++.h>

using namespace std;
int main(){
    char str[]={'a','b','a','c','d','b','a','e','d','c','b','a','z'};
   int hash[26]={0};

    for(int j=0;j<sizeof(str)/sizeof(str[0]);j++){
    hash[(int)str[j]-97]++;
   }

   int q,i=0;
   cout<<"enter querries:";
   cin>>q;
   
   char key;
   while(q--){
    cout<<"\nenter key: ";
    cin>>key;
    cout<<"\nfrequency of " << key << " is " << hash[(int)key-97];

   }
    return 0;
}