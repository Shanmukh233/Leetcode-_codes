class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& grid) {
          int n = grid.size(),m=grid[0].size();
        vector<vector<int>> res = grid;
        if(n==1) return res;
        // first: from (row, 0) → reverse sort
        for (int row = 0; row < n; row++) {
            vector<int> v;
            int i = row, j = 0;
            while (i < n && j < m) {
                v.push_back(res[i][j]);
                i++; j++;
            }
            sort(v.begin(), v.end());
            i = row; j = 0;
            int k = 0;
            while (i < n && j < m) {
                res[i][j] = v[k++];
                i++; j++;
            }
        }

        // second: from (0, col) → normal sort
        for (int col = 1; col < m; col++) {
            vector<int> v;
            int i = 0, j = col;
            while (i < n && j < m) {
                v.push_back(res[i][j]);
                i++; j++;
            }
            sort(v.begin(), v.end());
            i = 0; j = col;
            int k = 0;
            while (i < n && j < m) {
                res[i][j] = v[k++];
                i++; j++;
            }
        }

        return res;
    }
};