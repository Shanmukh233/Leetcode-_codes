class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<int> res;
        for(auto &it:mp){
           res.push_back(it.first);
        }
        int cnt=1,maxcnt=1;
        for(int i=1;i<res.size();i++){
            if(res[i]==res[i-1]+1){
                cnt++;
                maxcnt = max(maxcnt,cnt);
            }
            else if(res[i]!=res[i-1]+1){
                cnt=1;
            }
        }
        return maxcnt;
    }
};