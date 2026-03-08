class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<string>> res(n,vector<string>(2));
        for(int i=0;i<n;i++){
            string s="";
            for(int j=0;j<n;j++){
               s+=to_string(grid[i][j])+",";
            }
            res[i][0]=s;
        }
        for(int j=0;j<n;j++){
            string s="";
            for(int i=0;i<n;i++){
               s+=to_string(grid[i][j])+",";
            }
            res[j][1]=s;
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(res[i][0]==res[j][1]){
                   cnt++;
                }
            }
        }
        return cnt;
    }
};