class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size(),cnt=0,i,j,k;
        if(nums[0]>nums[1]) return false;
        if(nums[n-2]>nums[n-1]) return false;
        for(i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                return false;
            }            
            if(nums[i] > nums[i+1]){
               break;
            }
        }
        cnt++;
        if(i+1==n) false;
        for(j=i;j<n-1;j++){
            if(nums[j]==nums[j+1]){
                return false;
            }            
            if(nums[j]<nums[j+1]){
                break;
            }
        }
        cnt++;
         if(i+1==n) return false;
        for(k=j;k<n-1;k++){
            if(nums[k]>nums[k+1]){
                return false;
            }
        }
        cnt++;
        return cnt==3;
    }
};