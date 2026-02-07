class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
     int n=nums.size();
     map<int,int,greater<int>>mp;
     for(int i=0;i<n;i++){
       if(nums[i]%2==0){ 
       mp[nums[i]]++; 
       }
     }  
     int maxfre=0,ans=-1;
     for(auto it:mp){
        if(it.second >= maxfre){
          maxfre=it.second;
          ans=it.first;
        }
     } 
    return ans;
    }
};