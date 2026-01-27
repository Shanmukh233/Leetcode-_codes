class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> res(n,0);
        queue<int> q;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                cnt++;
                q.push(nums[i]);
            }
            else{
                res[i]=nums[i];
            }
        }
        if(cnt==0){
            return nums;
        }
        int times=k%cnt;
        for(int i=0;i<times;i++){
            int p=q.front();
            q.pop();
            q.push(p);
        }
      for(int i=0;i<n;i++){
        if(res[i]==0){
            res[i]=q.front();
            q.pop();
        }
      }
      return res;
    }
};