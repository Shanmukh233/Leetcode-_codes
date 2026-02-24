class Solution {
public:
    vector<string> buildArray(vector<int>& t, int n) {
       int i=0,j=1;
       vector<string> res;
       stack<int> st;
       st.push(j);
       res.push_back("Push");
      while(!st.empty() && (j<=n && i < t.size())){
          if(st.top()!=t[i]){ 
            st.pop();
            res.push_back("Pop");
            i--;
          }
          i++;
          j++;
          if(i>=t.size()) break;
          if(j>n) break;
          st.push(j); 
          res.push_back("Push");
      } 
      return res;
    }
};