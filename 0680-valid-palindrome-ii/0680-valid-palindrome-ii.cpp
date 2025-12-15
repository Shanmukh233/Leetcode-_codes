class Solution {
public:
    bool validPalindrome(string s) {
        int n=s.length();
        int i=0,j=n-1;
        while(i<j){
         if(s[i]!=s[j]) 
         {
            return ispal(s,i+1,j) || ispal(s,i,j-1);
         }
            i++;j--;
        }
         return true;
    }
    bool ispal(string &s,int l,int r){
        while(l<r){
        if(s[l++]!=s[r--]) return false;
        }
        return true;
    }
};