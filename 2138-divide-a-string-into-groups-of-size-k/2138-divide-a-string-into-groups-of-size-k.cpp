class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int r=s.length()%k;
        if(r>0){
        int m=k-r;
        while(m>0){
            s+=fill;
            m--;
        }
        }
        int n=s.length();
        vector<string> res;
        string s1="";
        int cnt=0;
        for(int i=0;i<n;i++){
           if(cnt<k){
            cnt++;
            s1+=s[i];
           }
           if(cnt==k){
             res.push_back(s1);
             s1="";
             cnt=0;
           }
        }
        return res;
    }
};