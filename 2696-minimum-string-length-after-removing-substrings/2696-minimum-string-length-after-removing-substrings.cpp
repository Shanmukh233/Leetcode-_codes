class Solution {
public:
    int minLength(string s) {
        int n=s.length();
        string s1="";
        for(int i=0;i<n;i++){
           s1+=s[i];
           if(s1.length()>=2 && (s1.substr(s1.length()-2)=="AB" || s1.substr(s1.length()-2)=="CD" )){
              s1.erase(s1.length()-2);
           }
        }
        return s1.length();
    }
};