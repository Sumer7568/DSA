#include <string>
class Solution {
public:
    string removeOuterParentheses(string s) {
        int left = 0;
        int right = 1;
        int n = s.size();
        string ans;
        int count =1;
        while(right<n){
            if(s[right]==')'){
                count--;
            if(count ==0){
                ans+=s.substr(left+1,right-left-1);
                left=right+1;
                
            }
            right++;

        }
        else if(s[right]=='('){
            count++;
            right++;
        }
        
    }
    return ans;
    }
};