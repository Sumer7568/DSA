class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int i=1;
        string word = strs[0];
        while(i<n){
            for(int j=0;j<word.size();j++){
                if(word.empty()) return word;
                if(strs[i][j]!=word[j]){
                    word = strs[i].substr(0,j);
                }
            }
            i++;

        }
        return word;
    }
};