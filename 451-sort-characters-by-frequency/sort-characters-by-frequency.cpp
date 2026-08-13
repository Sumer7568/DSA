class Solution {

public:
    string frequencySort(string s) {
        
        vector<int> freq(256, 0);
        for(char c : s) {
            freq[c]++;
        }
        

        vector<pair<int, char>> v;
        for(int i = 0; i < 256; i++) {
            if(freq[i] > 0) {
                v.push_back({freq[i], (char)i});
            }
        }
   
        sort(v.rbegin(), v.rend());
        
       
        string ans = "";
        for(auto p : v) {
            ans.append(p.first, p.second);
        }
        
        return ans;
    }
};


        // int n = s.size();
        // vector<int> a(256,0);
        // for(int i=0;i<n;i++){
        //     a[(int)s[i]]++;
        // }
        // vector<string> b(n+1,"");
        // for(int i=0;i<256;i++){
        //     b[a[i]]+=(char)i;
        // }
        // string ans="";
        // for(int i=n;i>=0;i--){
        //     if(b[i]!=""){
        //         for(char c : b[i]){
        //             string temp(i,c);
        //             ans+=temp;
        //         }
        //     }
        // }
        // return ans;




        
//     }
// };