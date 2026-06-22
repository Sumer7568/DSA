class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int left =0;
        int count=0;
        int maxx=0;
        
        

        for(int right =0;right< nums.size();right++){

            count +=nums[right]==0;

            while(count>1 && left<=right){
                count -=nums[left]==0;
                left++;

            }
            maxx = max(maxx, right-left);

            

            


        }

        return maxx;
        
    }
};