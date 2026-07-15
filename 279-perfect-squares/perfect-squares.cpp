class Solution {
private:
    int sqrt1(int num) {
    if (num < 0) return -1; 
    return static_cast<int>(std::sqrt(num));
}
    
public:
    int numSquares(int n) {
        vector<int> dp(n+1,n);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j*j<=i;j++){
                int square = j*j;

                dp[i]=min(dp[i],1+dp[i-square]);
            }
            
        } 
        return dp[n];

        
    }
};