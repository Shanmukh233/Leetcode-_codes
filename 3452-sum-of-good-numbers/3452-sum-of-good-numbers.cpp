class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0,j,y;
        for(int i=0;i<n;i++){
            j=i-k;
            y=i+k;
            if(j<0){
            if(nums[i]>nums[y]){
                sum +=nums[i];    
            }
            }
            else if(y>=n){
             if(nums[i]>nums[j]){
                sum +=nums[i];
            }
            } 
            else if(j>=0 && y<n){
            if(nums[i]>nums[j] && nums[i]>nums[y]){
                sum +=nums[i];
            }
            }
        }
        return sum;
    }
};