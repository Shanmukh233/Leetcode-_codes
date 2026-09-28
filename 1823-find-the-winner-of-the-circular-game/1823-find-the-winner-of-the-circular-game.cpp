class Solution {
public:
    int findTheWinner(int n, int k) {
        list<int> l;
        for(int i=1;i<=n;i++){
            l.push_back(i);
        }
         int cnt=0;
         auto it=l.begin();
        while(l.size()>1){
             cnt++;

             if(cnt==k){
                it=l.erase(it);
                cnt=0;
             }
             else{
                it++; 
             }

             if(it==l.end()){
                it=l.begin();
             }
        }
        return *it;
    }
};