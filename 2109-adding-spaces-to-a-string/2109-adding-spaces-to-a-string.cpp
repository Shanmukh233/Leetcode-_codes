class Solution {
public:
    string addSpaces(string s, vector<int>& sp) {
        int n=s.length(),j=0;
        string s1="";
        for(int i=0;i<n;i++){
            
            if(j<sp.size() && i==sp[j]){
               s1 += " ";
               j++;
            }
            s1 += s[i];
        }
        return s1;
    }
};