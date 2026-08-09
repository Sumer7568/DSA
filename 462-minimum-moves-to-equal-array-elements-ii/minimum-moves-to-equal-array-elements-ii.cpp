class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int m = n%2==0 ? (nums[n/2]+nums[(n-1)/2])/2 : nums[n/2];
        int ans=0;
        for(int n : nums){
            ans+=abs(m-n);
        }
        return ans;

        
    }
};