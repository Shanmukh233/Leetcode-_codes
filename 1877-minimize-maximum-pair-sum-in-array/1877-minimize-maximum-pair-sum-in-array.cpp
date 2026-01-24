class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=n-1,sum,maxel=0;
        while(i< n/2 && j>=n/2){
          sum=nums[i]+nums[j];
         maxel=max(maxel,sum);
         i++;
         j--;
        }     
        return maxel;
    }
};