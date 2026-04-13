#include<bits/stdc++.h>
int gcd(int n1,int n2){

    while(n1>0 && n2>0){
        if(n1>n2){
            n1=n1%n2;
        }
        else{
            n2=n2%n1;
        }
    }
    if(n1==0){
        return n2;
    }
    return n1;
}
/*
100 % 15 = 10 → (10, 15)
15 % 10 = 5  → (10, 5)
10 % 5  = 0  → (0, 5)
Answer = 5

TC: O()

*/