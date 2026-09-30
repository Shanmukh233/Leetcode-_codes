class Solution {
public:
    bool canTransform(vector<int>& s, vector<int>& t) {
        
        long long sum=0;
        for(int i=0;i<s.size();i++){
            sum += s[i];
        }
        for(int i=0;i<t.size();i++){
            sum -= t[i];
        }
        return sum==0;
    }
};