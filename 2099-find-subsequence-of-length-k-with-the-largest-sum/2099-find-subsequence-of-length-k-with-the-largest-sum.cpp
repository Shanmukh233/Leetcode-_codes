class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans;
        vector<pair<int,int>> res;
        for(int i=0;i<n;i++){
            res.push_back({nums[i],i});
        }
        sort(res.begin(),res.end());
        sort(res.begin()+n-k,res.end(),[](pair<int,int> a,pair<int,int> b){
             return a.second < b.second;
        });
        for(int i=n-k;i<n;i++){
            ans.push_back(res[i].first);
        }
        return ans;
    }
};