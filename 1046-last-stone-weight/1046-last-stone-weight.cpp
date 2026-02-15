class Solution {
public:
    int lastStoneWeight(vector<int>& st) {
          int n=st.size(),res=0,flag=0;
          priority_queue<int> pq;
          for(int x:st){
            pq.push(x);
          }  
          int first=0,sec=0;
        while(!pq.empty()){
            if(pq.size()==1){
                flag=1;
                break;
            }
            first=pq.top();
            pq.pop();
            
            if(!pq.empty()){
                sec=pq.top();
                pq.pop();
            }
            if(sec != first){
                int k=first-sec;
                pq.push(k);
            }
              
        }  
        if(flag) return pq.top();
        return res;
    }
};