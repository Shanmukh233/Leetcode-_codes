class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        string bin="";
        while(n>0){
            bin = char((n%2) + '0') + bin;
            n/=2;
        }
        for(int i=0;i<bin.length();i++){
           bin[i]=(bin[i]=='0')?'1':'0';
        }
        int k=stoi(bin,0,2);
        return k;
    }
};