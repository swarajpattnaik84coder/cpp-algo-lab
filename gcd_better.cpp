#include<bits/stdc++.h>
int min(int a,int b){
    if(a>b)return a;
    return b;
}
int gcd(int a,int b){
    for(int i=min(a,b);i>0;i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
}