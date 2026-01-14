class Solution {
public:
    bool hasAlternatingBits(int n) {
        string s="";
        while(n>0){
            s+=to_string(n%2);
            n=n/2;
        }
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]) return false;
        }
        return true;
    }
};