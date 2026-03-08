class Solution {
public:
    int minimumIndex(vector<int>& c, int it) {
        int n=c.size();
        vector<pair<int,int>> res;
       
        for(int i=0;i<n;i++){
           res.push_back({c[i] , i});
        }
        sort(res.begin(),res.end()); 
        for(int i=0;i<n;i++){
           if(res[i].first >= it){
             return res[i].second;
           }
        }     
        return -1;
    }
};