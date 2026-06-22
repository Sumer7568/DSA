class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        //sumer singh
        if(k<=1) return 0;
        int left =0;
        int right =0;
        long long prod =1;
        int count=0;
        for(;right<nums.size();right++){
            prod*=nums[right];
            while(prod>=k && left<=right){
                prod/=nums[left++];
            
            }
            count+=right-left+1;


        }
        return count;

    }
};