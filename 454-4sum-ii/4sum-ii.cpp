#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> sumMap;
        int count = 0;
        int n = nums1.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        sort(nums3.begin(),nums3.end());
        sort(nums4.begin(),nums4.end());
     
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                sumMap[nums1[i] + nums2[j]]++;
            }
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                int target = -(nums3[i] + nums4[j]);
                

                if(sumMap.count(target)) { 
                    count += sumMap[target];
                }
            }
        }
        
        return count;
    }
};


// class Solution {
// public:
//     int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {   
//         unordered_map<long long,int> h1;
//         unordered_map<long long,int> h2;
//         //sumer singh
//         int count=0;
//         int n = nums1.size();
//         for(int i=0;i<n;i++){
          
//             for(int j=0;j<n;j++){
//                 long long sum1=nums1[i];
//                 long long sum2 = nums2[i];
//                 sum1+=nums3[j];
//                 sum2+=nums4[j];
                
//                 h1[sum1]++;
//                 h2[sum2]++;
//             }
           
//         }
//         for(auto ch : h1){
            
//             long long s = -(ch.first);
//             if(h2.find(s)!=h2.end()){
//                 count+=ch.second*h2[s];
//             }
//         }
        
//       return count;  
//     }
// };