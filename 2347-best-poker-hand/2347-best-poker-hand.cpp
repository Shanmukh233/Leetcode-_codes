class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
    
        map<int,int> m;
        map<char,int> ch;
        for(int x:ranks){
            m[x]++;
        }
        for(char x:suits){
            ch[x]++;
        }
        auto it=ch.begin();
        if(ch.size()==1 && it->second==5){
            return "Flush";
        }
        int mx=0;
        for(auto it:m){
            mx=max(mx,it.second);
        }
        if(mx>=3) return "Three of a Kind";
        if(mx==2) return "Pair";
        return "High Card";
    }
};