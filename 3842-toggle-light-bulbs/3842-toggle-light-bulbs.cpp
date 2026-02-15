class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& b) {
        int n=b.size();
        vector<int> res;
        unordered_map<int,int> mp;
        for(int x:b){
            mp[x]++;
        }
        for(auto it:mp){
            if(it.second & 1){
                res.push_back(it.first);
            }
        }
        sort(res.begin(),res.end());
        if(n>0){
        return res;
        }
        return {}
;    }
};