class Solution{	
public:		
    string largeOddNum(string& s){
        //your code goes here
        string num;
        int i;
        for(i=s.size()-1;i>0;i--){
            if((s[i]-'0')%2!=0){
                break;
            }
        }
        int j;
        for(j=0;j<s.size()-1;j++){
            if((s[j]-'0')!=0){
                break;
            }
        }
    
        if(i<0 || j>i){
            return "-1";
        }
        else{
            return num(s.begin()+j,s.begin()+i);
        }
    }
};