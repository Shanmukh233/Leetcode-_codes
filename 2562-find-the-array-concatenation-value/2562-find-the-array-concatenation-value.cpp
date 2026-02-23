class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        long long concat=0;
        while(i<=j){
          if(i==j){
            concat+= nums[i];
            break;
          }
          string s1=to_string(nums[i]);
          string s2=to_string(nums[j]);
          string s3=s1+s2;
          long long k=stoll(s3);
          concat += k;
          i++;
          j--;
        }
        return concat;
    }
};