// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         //sumer singh

//         int left =0;
//         int right =1;

//         for(;right<nums.size();right++){
//             if(nums[left]==0 && nums[right]!=0){
//                 swap(nums[left],nums[right]);
//                 left++;
//             }
//             else if (nums[left]!=0){
//                 left++;
//             }

//         }
        

        
//     }
// };

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // sumer singh
        int left = 0;  // Writer

        // 'right' is the Explorer
        for(int right = 0; right < nums.size(); right++) {
            
            // The moment we find ANY non-zero number...
            if(nums[right] != 0) {
                // Throw it into the left-most available slot
                swap(nums[left], nums[right]);
                left++;
            }
        }
    }
};