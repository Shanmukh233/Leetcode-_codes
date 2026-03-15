class Solution {
public:
    int countCommas(int n) {
        string s=to_string(n);
        if(s.size()<4) return 0;
        
        long long num=stoll(s);
        
        return num-999;
    }
};