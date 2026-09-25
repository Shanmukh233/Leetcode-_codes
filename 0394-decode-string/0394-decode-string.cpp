class Solution {
public:
    string solve(string &s,int &i){
        string ans="";
        int num=0;
        while(i<s.size() && s[i]!=']'){
            if(isdigit(s[i])){
                num = num*10 + (s[i]-'0');
                i++;
            }
            else if(s[i]=='['){
                i++;
                string temp = solve(s,i);
                for(int i=0;i<num;i++){
                    ans += temp;
                }
                num=0;
                i++;
            }
            else{
                ans += s[i];
                i++;
            }
        }
        return ans ;
    }
    string decodeString(string s) {
         int i=0;
         return solve(s,i);
    }
};