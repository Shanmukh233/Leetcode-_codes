class Solution {
public:
    string shortestCompletingWord(string lp, vector<string>& w) {
        int n=w.size();
        unordered_map<int,int> mp1;
        for(char x:lp){
            if(isalpha(x)){        
            x=tolower(x);
            mp1[x]++;
            }
        }
   string s="";
   int minlen=INT_MAX;
      for(int i=0;i<n;i++){
         unordered_map <int,int> mp2;
         int flag=0;
         for(int j=0;j<w[i].length();j++){
            mp2[w[i][j]]++;
         }
         for(auto x:mp1){
            if(mp2[x.first]==0 || mp2[x.first]<x.second){ 
                flag=1;
                break;
            }    
         }
         if(flag==0){
            if(minlen > w[i].length()){
               minlen=w[i].length();
               s=w[i];
            }
         }
      }     
        return s;
    }
};