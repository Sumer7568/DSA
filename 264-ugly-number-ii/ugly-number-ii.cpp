class Solution {
public:
    int nthUglyNumber(int n) {

        //sumer singh
       vector<int> dp(n) ;
       dp[0]=1;
       int p1=0;
       int p2=0;
       int p3=0;

       for(int i =1 ;i<n;i++){
        int min1=dp[p1]*2;
        int min2=dp[p2]*3;
        int min3=dp[p3]*5;

        int nextugly = min({min1,min2,min3});
        dp[i]=nextugly;
        if(nextugly==min1) p1++;
        if (nextugly==min2)p2++;
        if(nextugly==min3) p3++;
       }

       return dp[n-1];
       
    }
};