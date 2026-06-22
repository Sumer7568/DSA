class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        //sumer singh
        int left =0;
        int count=0;
        int right =0;
        for(;right< nums.size();right++) {
            count +=nums[right]==0;
            if(count>1){
                count-=nums[left++]==0;
            }
            
            }
            return right - left -1;
             }

       
        
    };