class Solution {
public:
    vector<int> remele(vector<int>& res,int k){
        int n=res.size();
        for(int i=0;i<(k-1)%n;i++){
            int m=res.front();
            res.erase(res.begin());  
            res.push_back(m);
        }
        res.erase(res.begin());
        return res;
    }
    int findTheWinner(int n, int k) {
        vector<int> res;
        for(int i=0;i<n;i++){
            res.push_back(i+1);
        }
        while(res.size()!=1){
            res=remele(res,k);
        }
        return res[0];
    }
};