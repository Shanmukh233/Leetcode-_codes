class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n=nums.size();
         int cnt=0,k=0;
         vector<int> res;
        while(nums.size()>1){
            
            cnt=0;
            for(int i=0;i<nums.size();i=i+2){
              cnt++;
              if(cnt&1){
                k=min(nums[i],nums[i+1]);
                res.push_back(k);
              }
              else{
                k=max(nums[i],nums[i+1]);
                res.push_back(k);
              }
            }
            nums=res;
            res.clear();
        }
        return nums[0];
    }
};