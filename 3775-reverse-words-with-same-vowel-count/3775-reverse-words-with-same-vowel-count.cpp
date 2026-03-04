class Solution {
public:
    bool isvowel(char ch){
        return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    }
    string reverseWords(string s) {
        int n=s.length(),vc=0,i;
        for(i=0;i<n;i++){
            if(s[i]==' ') break;
            if(isvowel(s[i])){
                vc++;
            }
        }
        i++;
        int cnt=0,sc=0;
        for(int j=i;j<n;j++){
            if(isvowel(s[j])){
                cnt++;
            }
            if((s[j]==' ' || j==n-1)){
               if(cnt==vc){
               j=(j==n-1)?j+1:j;
               reverse(s.begin()+i ,s.begin()+j);
               }
               i=j+1;
               cnt=0;
            }

        }
       return s;
    }
};