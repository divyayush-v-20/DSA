class Solution {
public:
    //memoization
    int memo(int n,vector<int>& dp){
        if(n==1 || n==2){
            return n;
        } 
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n] = memo(n-1,dp) + memo(n-2,dp);
    }
    //tabulation
    int tab(int n){
        if(n==1) return 1;
        if(n==2) return 2;
        int p1 = 1,p2 = 2,ans;
        for(int i=3;i<=n;i++){
            ans = p1+p2;
            p1 = p2;
            p2 = ans;
        }
        return p2;
    }
    int climbStairs(int n) {
        if(n==0) return 0;
        // vector<int> dp(n+1,-1);
        // return memo(n,dp);
        return tab(n);
    }
};
