class Solution {
public:

        int dr[4]={-1,1,0,0};
        int dc[4]={0,0,-1,1};
        bool dfs(int &i,int &j,vector<vector<char>> &b,string w,int in,int wl,vector<vector<bool>>& visited,int m,int n){
            visited[i][j] = true;
            
            for(int k=0;k<4;k++){
                int ni=i+dr[k];
                int nj=j+dc[k]; 
                if(ni>=0 && ni<m && nj>=0 && nj<n && in<wl && b[ni][nj]==w[in] && !visited[ni][nj] ){
                    if(in==wl-1){
                    return true;
                }
                    if(dfs(ni,nj,b,w,in+1,wl,visited,m,n)){
                        return true;
                    }
                }
            }
            visited[i][j]=false;
            
            return false;
        }
    bool exist(vector<vector<char>>& b, string w) {
        int m=b.size();
        int n=b[0].size();
        int in=0,wl=w.length();
        vector<vector<bool>> visited(m,vector<bool>(n,0));
        for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
            if(b[i][j] == w[0] && w.length()==1){
                return true;
            }
            else if(b[i][j] == w[0]){
                if(dfs(i,j,b,w,in+1,wl,visited,m,n)){
                    return true;
                }
            }
           }
        }
        return false;
    }
};