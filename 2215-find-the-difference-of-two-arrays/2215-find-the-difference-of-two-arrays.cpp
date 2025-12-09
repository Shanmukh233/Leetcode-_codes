class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& num1, vector<int>& num2) {
        vector<vector<int>> ans(2);
         set<int> set1(num1.begin(),num1.end());
         set<int> set2(num2.begin(),num2.end());
         vector<int> nums1(set1.begin(),set1.end());
         vector<int> nums2(set2.begin(),set2.end());
        
       for(int i=0;i<nums1.size();i++){
          if(find(nums2.begin(),nums2.end(),nums1[i])==nums2.end()){
            ans[0].push_back(nums1[i]);
          }
       }
       
       for(int i=0;i<nums2.size();i++){
          if(find(nums1.begin(),nums1.end(),nums2[i])==nums1.end()){
            ans[1].push_back(nums2[i]);
          }
       }
       return ans;

    }
};