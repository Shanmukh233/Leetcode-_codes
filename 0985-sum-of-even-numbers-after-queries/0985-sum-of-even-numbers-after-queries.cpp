class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
        int n=q.size(),evensum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                evensum += nums[i];
            }
        }
        vector<int> res;
        for(int i=0;i<n;i++){
                 
            if(nums[q[i][1]] % 2 == 0){
              evensum -= nums[q[i][1]];
            }
           nums[q[i][1]] += q[i][0];
           if(nums[q[i][1]] % 2 == 0){
             evensum += nums[q[i][1]] ;
           }
           res.push_back(evensum);
        }
        return res;
    }
};