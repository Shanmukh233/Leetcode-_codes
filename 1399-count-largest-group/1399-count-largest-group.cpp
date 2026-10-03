class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> res;
        for(int i=1;i<=n;i++){
            int k=i,sum=0;
            while(k>0){
              sum += k%10;
              k /= 10;
            }
            res.push_back(sum);

        }
        unordered_map<int,int> mp;
        for(int i=0;i<res.size();i++){
           mp[res[i]]++;
        }
        int maxgr=0;
        for(auto it:mp){
           maxgr= max(maxgr, it.second);
        }
        int cnt=0;
        for(auto it:mp){
            if(it.second==maxgr){
                cnt++;
            }
        }
        return cnt;
    }
};