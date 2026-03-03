class Solution {
public:
    string modstr(string &s){
        string s1=s;
        for(char &c:s1){
            c=(c=='0')?'1':'0';
        }
        reverse(s1.begin(),s1.end());
        s = s + "1"+s1;
        return s;
    }
    char findKthBit(int n, int k) {
       string s="";
       s+="0";
       if(n==1) return s[0];
       n--;
       while(n>0){
         s=modstr(s);
         n--;
       } 
       return s[k-1];
    }
};