class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size();
        vector<int> res;
        string s="";
        for(int i=0;i<n;i++){
            s+=num[i]+'0';
        }
         string s1=to_string(k);
        int i=s.size()-1,j=s1.size()-1;
       int carry=0;
       while(i>=0 || j>=0 || carry){
          int sum=carry;
          if(i>=0) sum += s[i--] - '0';
          if(j>=0) sum += s1[j--] - '0'; 
          res.push_back((sum%10));
          carry = sum/10; 
       }
       reverse(res.begin(),res.end());
       return res;
    }
};