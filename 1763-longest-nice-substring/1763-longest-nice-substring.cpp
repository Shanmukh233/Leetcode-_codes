class Solution {
public:
    string longestNiceSubstring(string s) {
        int n=s.length();
        if(n<2) return "";
        unordered_set<char> set(s.begin(),s.end()); 
        for(int i=0;i<n;i++){
            if(!set.count(toupper(s[i])) || !set.count(tolower(s[i]))){
       string s1=longestNiceSubstring(s.substr(0,i));
        string s2=longestNiceSubstring(s.substr(i+1,n));
        if(s1.length()>s2.length()){
            return s1;
        }            
        else{
            return s2;
        } 
    }
        }
       return s;
    }
};