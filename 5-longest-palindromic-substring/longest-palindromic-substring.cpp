class Solution {
private:
    int exp(string& s, int l, int r){
        while(l >= 0 && r < s.size() && s[l] == s[r]){
            l--;
            r++;
        }
        return r - l - 1;
    }
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int maxlen = 0;
        int start = 0;
        
        for(int i = 0; i < n; i++){
            int l1 = exp(s, i, i);
            int l2 = exp(s, i, i + 1);
            int len = max(l1, l2);
            
            if(len > maxlen){
                maxlen = len;
                start = i - (len - 1) / 2;
            }
        }
        
        return s.substr(start, maxlen);
    }
};