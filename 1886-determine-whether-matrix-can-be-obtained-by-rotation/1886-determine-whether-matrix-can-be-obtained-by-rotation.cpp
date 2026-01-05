class Solution {
public:
    bool rotate(vector<vector<int>>& mat,vector<vector<int>>& mat1,vector<vector<int>>& target){
      int n=mat.size();
        reverse(mat.begin(),mat.end());
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
              mat1[j][i]=mat[i][j];
           }
       } 
          for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
              if(mat1[i][j]!=target[i][j]){
                  return false;
              }
           }
       } 
       return true;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        vector<vector<int>> mat1(n,vector<int>(n,0));
        for(int i=0;i<4;i++){
            if(rotate(mat,mat1,target)){
                 return true;
            }
            else{
          for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
              mat[i][j]=mat1[i][j];
           }
        }
        }
    }
    return false;
    }
};