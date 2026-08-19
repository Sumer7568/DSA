class Solution {
private:
    void generate(string curr,int open,int close,int n,vector<string>&result){
        if(open==n && close == n){
            result.push_back(curr);
            return;
        }
        if(open<n){
            
             generate(curr+"(",open+1,close,n,result);
        }
        if(close<n && open>close){
            
             generate(curr+")",open,close+1,n,result);
        }
    }

public:
    vector<string> generateParenthesis(int n) {
       vector<string> ans;
       string s="";
       generate(s,0,0,n,ans);
       return ans;

        
    }
};