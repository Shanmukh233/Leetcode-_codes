class Solution {
public:
    string digitSum(string s, int k) {
        int n=s.length(),cnt=0,sum=0;
        
        while(s.length()>k){
            string s1="";
            for(int i=0;i<s.length();i++){
           cnt++;
           sum += s[i]-'0';
           if(cnt==k || i==s.length()-1){
              s1 += to_string(sum);
              sum=0;
              cnt=0;
           }
        }
        s=s1;
    }
      return s;
    }
};