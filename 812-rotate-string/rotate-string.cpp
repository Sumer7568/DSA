class Solution {
public:
    bool rotateString(string s, string goal) {
        int m = goal.size();
        int k = s.size();
        if(m!=k)return false;
        s+=s;
        int n=s.size();
        
        for(int i=0;i<n;i++){
            if(s.substr(i,m)==goal)return true;
        }
        return false;
    }
};