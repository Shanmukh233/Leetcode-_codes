class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size(),cnt=0;
        for(int i=n-2;i>=0 && bits[i]==1;i--){
            if(bits[i]==1) cnt++;
        }
        if(cnt&1) return false;
    return true;
    }
};