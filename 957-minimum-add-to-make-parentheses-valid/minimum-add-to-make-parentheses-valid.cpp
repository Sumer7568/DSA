class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        int left = 0;
        int cnt=0;
        int p1 = 1;
        int p2 = -1;
        int ans =0;
        for(int right=0;right<n;right++){
            if(cnt==0 && s[right]==')'){
               ans+=p1;
            }
            else if(s[right]==')')cnt+=p2;
            else if(s[right]=='(') cnt+=p1; 
        }
        return ans + cnt;
    }
};