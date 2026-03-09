class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size(),m=mat[0].size();
        vector<vector<int>> res;
        vector<int> row;
        if(m*n!=r*c) return mat;
        int x=0,y=0;
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){

               row.push_back(mat[i][j]);
                if(row.size()==c){
                 res.push_back(row);
                 row.clear();
               }              
               
            }
        } 
        return res;
    }
};