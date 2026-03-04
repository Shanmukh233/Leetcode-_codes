class Solution {
public:
    int countTestedDevices(vector<int>& bp) {
        int n=bp.size();
        int maxdev=0;
        for(int i=0;i<n;i++){
           if(bp[i]>0){
            maxdev++;
             for(int j=i+1;j<n;j++){
                bp[j] -= 1;
             }
           }
           
        }
        return maxdev;
    }
};