class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // sumer singh
        int n = nums.size();
        int left = 0;
        
         vector<vector<int>> ans;
        if(n<3) return ans;
        sort(nums.begin(),nums.end());
        int right = n-1;
        
       
        for(;left<n;left++){
            if(left>0 && nums[left]==nums[left-1]) continue;
            int mid = left+1;
            right = n-1;
            
            while(mid<right){
                int sum = nums[left]+nums[mid]+nums[right];
                if(sum > 0){
                    right--;
                }
                else if(sum<0){
                    mid++;
                }
                else if(sum==0){
                    vector<int> temp = { nums[left],nums[mid],nums[right]};
                    ans.push_back(temp);
                    mid++;
                    right--;
                while( right>mid && nums[right+1]==nums[right]){
                    right--;
                }
                while(right >mid && nums[mid-1]==nums[mid]){
                    mid++;
                }
                }
            }
        }
        return ans;
    }
};