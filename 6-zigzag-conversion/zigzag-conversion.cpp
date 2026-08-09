class Solution {
public:
    string convert(string s, int m) {
        int len = s.size();
        if(m<=1 || m>=len){
            return s;
        }
        vector<string> t(m);
        bool flip= false;
        int ind= 0;

        for(char c : s){
            t[ind]+=c;
          
            
            if(ind ==0 || ind ==m -1){
                flip = !flip;
            }
            ind += flip ? 1:-1;
            

        }
        string res;
        for(string r : t){
            res+=r;
        }
        return res;
        

    }
};