class Solution {
public:
    int minimizedStringLength(string s) {
        vector<char> v;
        for(int i=0;i<s.length();i++){
            v.push_back(s[i]);
        }
     set<char> set(v.begin(),v.end());
     return set.size();   
    }
};