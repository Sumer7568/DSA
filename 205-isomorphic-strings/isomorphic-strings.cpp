class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        vector<int> s1(256,-1);
        vector<int> t1(256,-1);

        for(int i=0 ;i<n;i++){
            if(s1[s[i]]!=t1[t[i]]){
                return false;
            }
            s1[s[i]]=i;
            t1[t[i]]=i;
        }
        return true;
        // s1[(int)s[0]]=0;
        // t1[(int)t[0]]=0;
        
        // for(int i=1;i<n;i++){
        //     s1[(int)s[i]]=i;
        //     t1[(int)t[i]]=i;
        //     if((s[i-1]!=s[i] && t[i-1]==t[i]) || (s[i-1]==s[i]&& t[i-1]!=t[i])){
        //         return false;
        //     }
        //     else{
        //         if(s[i-1]!=s[i] && t[i-1]!=t[i]){
        //             if(s1[(int)s[i]] == t1[(int)t[i]]) continue;
        //             else return false;
        //         }
                
        //     }
           
            

        // }
        // return true;
        
    }
};