class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string s="";
        int len=INT_MAX;
        for(int i=0;i<n;i++){
            if(strs[i].length() < len){
                len=strs[i].length();
                s=strs[i];
            }
        }
        
        for(int i=0;i<n;i++){
          
          for(int j=0;j<s.length();j++){
             if(s[j]!=strs[i][j]){
                s=s.substr(0,j);
                break;
             }
          }
          if(s.length()==0) break;
        } 
        return s;
    }
};