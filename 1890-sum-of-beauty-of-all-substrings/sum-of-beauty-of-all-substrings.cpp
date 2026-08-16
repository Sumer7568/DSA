#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        int sum = 0;

        // Loop over all substrings
        for (int i = 0; i < n; i++) {
            unordered_map<char, int> freq;

            for (int j = i; j < n; j++) {
                // Increase frequency of current character
                freq[s[j]]++;

                int maxi = INT_MIN;
                int mini = INT_MAX;

                // Find max and min frequency
                for (auto it : freq) {
                    mini = min(mini, it.second);
                    maxi = max(maxi, it.second);
                }

                // Add difference to sum
                sum += (maxi - mini);
            }
        }

        return sum;
    }
};// class Solution {
// private:
//    int helper(vector<int> arr){
//         sort(arr.begin(), arr.end());
        
//         int min_freq = 0;
        
      
//         for(int i = 0; i < 26; i++){
//             if(arr[i] > 0){
//                 min_freq = arr[i];
//                 break;
//             }
//         }
        
//         int max_freq = arr[25];
        
//         return max_freq - min_freq;
//     };
    

// public:
//     int beautySum(string s) {
//         int count=0;
//        for(int i=0;i<s.size();i++){
        
//         vector<int> freq(26,0);
//         for(int j=i;j<s.size();j++){
//             freq[s[j]-'a']++;
            
//             count+=helper(freq);
//         }
//        }
//        return count;
//     }
// };