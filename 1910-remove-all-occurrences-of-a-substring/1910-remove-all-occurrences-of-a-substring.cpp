class Solution {
public:
    string removeOccurrences(string s, string part) {
        string s1="";
        int n=part.length(),m=s.length(),i=0;
        while(i<m){
             s1+=s[i];
             
            if((s1.size() >= n) && (s1.substr(s1.size()-n)==part)){
                s1.erase(s1.size()-n);
            } 
           i++;
        }
        return s1;
    }
};