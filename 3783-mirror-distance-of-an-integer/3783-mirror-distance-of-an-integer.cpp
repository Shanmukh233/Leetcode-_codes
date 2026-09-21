class Solution {
public:
    int mirrorDistance(int n) {
        
       int k=n;long long rev=0;
       while(k>0){
         int r=k%10;
         rev = rev*10 + r;
         k/=10;
       } 
       long long ans = abs(n-rev);
       return ans; 
    }
};