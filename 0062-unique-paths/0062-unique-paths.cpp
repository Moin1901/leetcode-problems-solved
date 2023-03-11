class Solution {
public:
    int up(int m,int n,vector<vector<int>>&dp){
         if(m==1&&n==1)return 1;
        if(m<1||n<1)return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        int uup=up(m-1,n,dp);
        int left=up(m,n-1,dp);
        dp[m][n]= uup+left;
        return dp[m][n];
    }
    int uniquePaths(int m, int n) {
         vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return up(m,n,dp);
        
        
    }
};

