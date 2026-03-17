class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int n=t.size(),x=0,y=0 ;
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            q.push({t[i],i});
        }
        int op=0;
        while(!q.empty()){
            if(q.front().second==k && q.front().first==1) break;
            x=q.front().first;
            y=q.front().second;
            x-= 1;
             q.pop();
            if(x>0){
           
            q.push({x,y});
            }
            op++;
        }
       return op+1;
    }
};