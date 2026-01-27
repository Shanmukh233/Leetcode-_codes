class Solution {
public:
bool isprime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

    int largestPrime(int n) {
        vector<int> res;
        for(int i=1;i<=n;i++){
            if(isprime(i)){
              res.push_back(i);
            }
        }
        int sum=0,maxprime=0;
        for(int i=0;i<res.size();i++){
            sum+= res[i];
            if(sum>n) break;

            if(isprime(sum)){
                maxprime=max(sum,maxprime);
            }
        }
        return maxprime;
    }
};