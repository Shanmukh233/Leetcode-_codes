class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> arr;
        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            if(nums[i] > 0)
            {
                int y = (i + nums[i]) % n;   
                arr.push_back(nums[y]);
            }
            else if(nums[i] < 0)
            {
                int y = (i + nums[i]) % n;   
                if(y < 0) y += n;           
                arr.push_back(nums[y]);
            }
            else
            {
                arr.push_back(0);           
            }
        }
        return arr;
    }
};