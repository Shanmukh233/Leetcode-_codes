class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int mindif=INT_MAX;
        for(int i=0;i<n-1;i++){
           mindif= min(mindif,arr[i+1]-arr[i]);
        }
        vector<vector<int>> res;
        for(int i=0;i<n-1;i++){
            if(mindif==arr[i+1]-arr[i]){
                res.push_back({arr[i],arr[i+1]});
            }
        }
        return res;
    }
};