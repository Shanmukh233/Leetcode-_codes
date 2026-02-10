class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int esum=0,osum=0;
        for(int i=0;i<n;i=i+2){
           esum += nums[i];
        }
       for(int i=1;i<n;i=i+2){
           osum += nums[i];
        }
        return esum-osum;
    }
};