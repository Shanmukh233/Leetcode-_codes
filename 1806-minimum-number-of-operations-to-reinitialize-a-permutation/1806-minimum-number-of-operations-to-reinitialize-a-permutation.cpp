class Solution {
public:
    int reinitializePermutation(int n) {
        vector<int> per;
        for(int i=0;i<n;i++){
            per.push_back(i);
        }
        vector<int> original=per;
        vector<int> arr(per.size(),0);
         int op=0;
         while(true){

            for(int i=0;i<n;i++){
                if(i%2==0){
                    arr[i]=per[i/2];
                }
                else{
                    arr[i]=per[n/2 + (i-1)/2];
                }
            }
            op++;
            if(arr==original) break;
            per=arr;
            
         }
         return op;
    }
};