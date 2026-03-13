class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<vector<int>> res;
        int n=in.size();
        sort(in.begin(),in.end());
        res.push_back({in[0][0],in[0][1]});
        for(int i=1;i<n;i++){
            if(res.back()[1] >= in[i][0] && res.back() [1] <= in[i][1]){
                res.back()[1]=in[i][1];
            }
            else if(res.back()[1] < in[i][0] && res.back() [1] < in[i][1]){
                res.push_back({in[i][0],in[i][1]});
            }
        }
        return res;
    }
};