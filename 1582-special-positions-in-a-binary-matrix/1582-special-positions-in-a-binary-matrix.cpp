class Solution {
public:
    bool fun(vector<vector<int>>& mat,int i,int j,int n,int m){
        int c1=0,c2=0;
        for(int x=0;x<m;x++){
           if(mat[i][x]==1) c1++;
        }
        for(int y=0;y<n;y++){
           if(mat[y][j]==1) c2++;
        }        
        return c1==1 && c2==1;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size(),cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    if(fun(mat,i,j,n,m)){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};