class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int n=nums.size();
        if(nums[0]==1  && nums[n-1]==n){
            return 0;
        }
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                x=i;
            }
            else if(nums[i]==n){
                y=i;
            }
        }
        int op=0;
        if(x<y){
            op=x + (n-y-1);
        }
        else{
            op=x+(n-y-1)-1;
        }
        return op;
    }
};