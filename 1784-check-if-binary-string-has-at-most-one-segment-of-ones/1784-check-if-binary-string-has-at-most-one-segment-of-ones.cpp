class Solution {
public:
    bool checkOnesSegment(string s) {
        int n=s.length();
        if(n==0) return false;
        if(n==1) return true;
        if(n==2 && ((s[0]=='1' && s[1]=='0') || (s[0]=='1' && s[1]=='1'))) return true;
        for(int i=0;i<n-1;i++){
            if(s[i]=='0' && s[i+1]=='1') return false;
        }
        return true;
    }
};