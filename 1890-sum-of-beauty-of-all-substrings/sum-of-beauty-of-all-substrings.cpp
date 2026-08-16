class Solution {
private:
   int helper(vector<int> arr){
        sort(arr.begin(), arr.end());
        
        int min_freq = 0;
        
      
        for(int i = 0; i < 26; i++){
            if(arr[i] > 0){
                min_freq = arr[i];
                break;
            }
        }
        
        int max_freq = arr[25];
        
        return max_freq - min_freq;
    };
    

public:
    int beautySum(string s) {
        int count=0;
       for(int i=0;i<s.size();i++){
        
        vector<int> freq(26,0);
        for(int j=i;j<s.size();j++){
            freq[s[j]-'a']++;
            
            count+=helper(freq);
        }
       }
       return count;
    }
};