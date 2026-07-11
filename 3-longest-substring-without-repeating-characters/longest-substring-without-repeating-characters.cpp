class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int hashLength = 256;
        int hash[hashLength];
        for(int i = 0; i < hashLength; ++i){
            hash[i] = -1;
        }
        int right = 0, left = 0, maxLength = 0;
        while(right < n){
            if(hash[s[right]] != -1){
                left = max(hash[s[right]] + 1, left);
            }
            int length = right - left + 1;
            maxLength = max(length, maxLength);
            hash[s[right]] = right;
            right++;
        }

        return maxLength;
    }
};
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         // sumer singh
//         int left =0;
//         int right =0;
//         string sub="";
//         int maxx=0;
//         for(;right<s.size();right++){
//             sub+=s[right];
//             while(count(sub.begin(),sub.end(),s[right])>1 && left<=right){
//                 sub=sub.substr(1,sub.size());
//                 left++;
//             }
//             maxx=max(maxx,right-left+1);
            
//         }
//         return maxx;

        
//     }
// };