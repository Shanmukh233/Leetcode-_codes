class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        int k=abs(num);
        string s="";
        while(k>0){
          int r=k%7;
          s+=to_string(r);
          k=k/7;
        }
        reverse(s.begin(),s.end());
        if(num < 0){
            s ="-"+s;
        }
        return s;
    }
};