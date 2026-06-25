class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //sumer singh

        int left =0;
        int right =1;

        for(;right<nums.size();right++){
            if(nums[left]==0 && nums[right]!=0){
                swap(nums[left],nums[right]);
                left++;
            }
            else if (nums[left]!=0){
                left++;
            }

        }
        

        
    }
};