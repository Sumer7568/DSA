class Solution {
public:
    int maxDepth(string s) {
        int n= s.size();
        int maxi = 0,count = 0;
        for(auto c : s){
            if(c=='('){
                count++;
            }
            else if(c==')'){
                maxi = max(maxi,count);
                count--;
            }
        }
        return maxi;
    }
};