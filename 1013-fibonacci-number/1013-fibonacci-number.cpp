class Solution {
public:
    int fib(int n) {

        int pp = 0, p = 1,ans;
        if(n==0 || n==1) return n;
        for (int i = 2; i <= n; i++)
            {   
            ans = pp +p;    
            pp= p;
            p= ans;}
        return ans;        
    }
};