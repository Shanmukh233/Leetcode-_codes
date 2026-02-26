class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n=s.length();
        if(n<k) return false;
        map<string,int> mp;
        string s1="";
        for(int i=0;i<k;i++){
           s1+=s[i];
        }
        mp[s1]++;
        for(int i=k;i<n;i++){
            s1.erase(s1.begin());
            s1+=s[i];
            mp[s1]++;
        }
        return (mp.size()==pow(2,k));
    }
};