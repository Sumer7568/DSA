class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int n = words.size();
        int m = words[0].size();
        vector<int> ans;
        unordered_map<string,int> mpp;
        for(string str : words){
            mpp[str]++;
        }
        if (s.size() < n * m) return {};
        
        vector<int> cope;
        for(int i=0;i<=s.size()-n*m;i++){
            string temp;
            temp = s.substr(i,m);
            if(mpp.find(temp)!=mpp.end()){
               unordered_map<string,int> mpp2;
               for(int j=0;j<n;j++){
                mpp2[s.substr((i+j*m),m)]++;
                
               }
            if(mpp2==mpp){
                cope.push_back(i);
            }


            }
            
        }
        return cope;

        
    }
};