class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& ind) {
        int k=ind.size();
        vector<vector<int>> res(m,vector<int>(n));
        for(int i=0;i<k;i++){
            int row=ind[i][0],col=ind[i][1];

            for(int x=0;x<n;x++){
              res[row][x] += 1;
            }

            for(int x=0;x<m;x++){
              res[x][col] += 1;
            }
        }
        int cnt=0;
       for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
            if(res[i][j]%2!=0){
              cnt++;
            }
         }
       }
       return cnt;
    }
};