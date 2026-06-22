class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // sumer singh
        int left =0;
        int right =0;
        string sub="";
        int maxx=0;
        for(;right<s.size();right++){
            sub+=s[right];
            while(count(sub.begin(),sub.end(),s[right])>1 && left<=right){
                sub=sub.substr(1,sub.size());
                left++;
            }
            maxx=max(maxx,right-left+1);
            
        }
        return maxx;

        
    }
};