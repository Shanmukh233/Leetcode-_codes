class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size(),cnt=0;
        unordered_map<int,int> counts;
        for(int num:nums)
        {
           counts[num]++;
        }
     int count=0;
     for(auto const&[num,freq] : counts){
        if(k==0){
            if(freq>1){
                count++;
            }
        }
        else{
            if(counts.count(num+k)){
                count++;
            }
        }
     }
        return count;
    }
};