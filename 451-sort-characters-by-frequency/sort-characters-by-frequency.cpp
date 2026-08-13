class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        vector<int> a(256,0);
        for(int i=0;i<n;i++){
            a[(int)s[i]]++;
        }
        vector<string> b(n+1,"");
        for(int i=0;i<256;i++){
            b[a[i]]+=(char)i;
        }
        string ans="";
        for(int i=n;i>=0;i--){
            if(b[i]!=""){
                for(char c : b[i]){
                    string temp(i,c);
                    ans+=temp;
                }
            }
        }
        return ans;




        
    }
};