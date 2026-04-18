#include<bits/stdc++.h>
using namespace std;
class Solution{	
	public:
		bool brute_rotateString(string& s,string& goal){
			//your code goes here
            if(s.size() != goal.size()) return false;

			 int n=s.size();
    
    for(int i=0;i<n;i++){
        if(goal==s.substr(i)+s.substr(0,i)){
            return true;
        }
    }
    return false;
		}
};