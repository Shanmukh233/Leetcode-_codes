class Solution {
public:
    bool evensum(int n){
        int sum=0;
       while(n>0){
         int r=n%10;
         sum += r;
         n/=10;
       }
       return sum%2==0;
    }
    int countEven(int num) {
        int cnt=0;
        for(int i=1;i<=num;i++){
           if(evensum(i)){
               cnt++;             
           }
        }
        return cnt;
    }
};