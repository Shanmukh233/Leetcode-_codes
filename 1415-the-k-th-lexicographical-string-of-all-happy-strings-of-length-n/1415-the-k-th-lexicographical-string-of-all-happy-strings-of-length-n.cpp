class Solution {
public:
    string getHappyString(int n, int k) {
        vector<string> res;
        queue<string> q;
        q.push("a");
        q.push("b");
        q.push("c");

        while(!q.empty()){
            string s=q.front();
            q.pop();
            if(s.size()==n){
                res.push_back(s);
                continue;
            }

           for(char c='a';c<='c';c++){
             if(s.back()!= c ){
                q.push(s+c);
             }
           }
        }
        if(k>res.size()){
            return "";
        }
        return res[k-1];
    }
};