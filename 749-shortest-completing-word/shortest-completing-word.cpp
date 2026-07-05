class Solution {
public:
    string shortestCompletingWord(string l, vector<string>& w) {
        //sumer singh
        int a[26]={0};
        for(int i=0;i<l.size();i++){
            if(isalpha(l[i]) ) a[tolower(l[i])-'a']++;
        }
        string result;
        
        for(int i=0;i<w.size();i++){
            int b[26]={0};
            string s = w[i];
            for(int j=0;j<s.size();j++){
                b[s[j]-'a']++;
            }
            bool flag = true;
            for(int k=0;k<26;k++){
                
                if(b[k]<a[k]){
                    flag= false;
                }
            }
            if(flag && (result.empty()|| result.size()>s.size())){result = s;}

        }
        return result;
    }
};