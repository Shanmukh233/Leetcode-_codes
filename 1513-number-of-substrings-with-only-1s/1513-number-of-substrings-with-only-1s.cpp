class Solution {
public:
    int numSub(string s) {
        int n=s.length();
        long long cnt=0,sum=0;       
        int mod=1e9+7; 
        for(int i=0;i<n;i++){
          if(s[i]=='1'){
            cnt++;
          }
          else{
             sum += cnt*(cnt+1)/2;
             cnt=0;
          }
        }
        
        sum += cnt*(cnt+1)/2;
        return sum % mod;
    }
};