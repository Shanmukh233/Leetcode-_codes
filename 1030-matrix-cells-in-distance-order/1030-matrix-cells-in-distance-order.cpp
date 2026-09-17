class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rcen, int ccen) {
        vector<pair<int ,pair<int,int>>> ans;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){ 
               int k=abs(rcen-i) + abs(ccen-j);
               ans.push_back({k,{i,j}});
            }
        }
        sort(ans.begin(),ans.end());
        vector<vector<int>> res;
        for(int i=0;i<ans.size();i++){
            res.push_back({ans[i].second.first,ans[i].second.second});
        }
        return res;
    }
};