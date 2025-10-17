class Solution {
public:
    bool palindromic(int k)
    {    int rev=0,m=k;
        while(k>0)
        {
            int r=k%10;
             rev=rev*10+r;
             k/=10;
        }
        return (m==rev);
    }
    bool isStrictlyPalindromic(int n) {
        if(n>=4) return false;
    
        for(int i=2;i<=n-2;i++)
        {    int m=n;
             int place=1,ans=0,rem;
            while(m>0)
            {
                rem=m%i;
                ans = ans+ place*rem;
                place *= 10;
                m=m/i;
            }
            if(!palindromic(ans)) return false; 
        }
        return true;
    }
};