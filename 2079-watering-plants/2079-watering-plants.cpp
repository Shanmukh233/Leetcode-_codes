class Solution {
public:
    int wateringPlants(vector<int>& p, int cp) {
        int n=p.size();
        int k=cp,steps=0;
        for(int i=0;i<n;i++){
           if(k >= p[i]){
             k -= p[i];
             steps++;
           }
           else{
             steps += (i)*2;
             k=cp;
             i--;
           }
        }
        return steps;
    }
};