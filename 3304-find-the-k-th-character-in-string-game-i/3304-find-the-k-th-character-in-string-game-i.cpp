class Solution {
public:
    string convertedstr(string &s){
       string s1="";
       for(int i=0;i<s.length();i++){
         s1 += s[i] +1; 
       }
        return s+s1; 
    }
    char kthCharacter(int k) {
        string s="";
        s +='a';
        while(s.length() < k){
            s = convertedstr(s);
        }
        char ch=s[k-1];
        return ch;
    }
};