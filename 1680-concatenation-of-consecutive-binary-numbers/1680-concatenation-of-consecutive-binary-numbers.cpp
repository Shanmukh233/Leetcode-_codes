class Solution {
public:
    int concatenatedBinary(int n) {
        long long result=0;
        const int mod=1e9+7;
        for(int i=1;i<=n;i++){
           int temp=i;
           while(temp>0){
             result =(result * 2)% mod;
             temp >>= 1;
           }
           result =(result + i)%mod;
        }
        return result;
    }
};