class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        for(int i:nums1){
          s.insert(i);
        }
        for(int x:nums2){
            if(s.count(x)) return x;
        }
        return -1;
    }
};