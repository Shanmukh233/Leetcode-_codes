class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        vector<string> ans;
        string k="";
        for(int i=0;i<n;i++){
            if(s1[i]==' '){
                ans.push_back(k);
                k="";
            }
            else{
            k+=s1[i];
            }
        }
        ans.push_back(k);
        k="";
        for(int i=0;i<m;i++){
            if(s2[i]==' '){
                ans.push_back(k);
                k="";
            }
            else{
            k+=s2[i];
            }
        }
        ans.push_back(k);
        unordered_map<string,int> mp;

        for(int i=0;i<ans.size();i++){
            mp[ans[i]]++;
        }


        vector<string> res;
        for(auto &it:mp){
            if(it.second==1){
                res.push_back(it.first);
            }
        }
        return res;
    }
};