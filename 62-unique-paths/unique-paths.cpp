class Solution {
public:
    int uniquePaths(int m, int n) {

        int N=m+n-2;
        int k = min(m-1,n-1);
        double result = 1;
        for(int i =1;i<=k;i++){
            result=result*(N-i+1)/i;
        }
        return (int)result;
    //    vector<vector<int>> dp(m,vector<int>(n,1));
    //     for(int i=1;i<m;i++){
    //         for(int j=1;j<n;j++){
    //             dp[i][j]=dp[i][j-1]+dp[i-1][j];
    //         }
    //     }
    //     return dp[m-1][n-1];
    }
};