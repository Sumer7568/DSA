class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //sumer singh
        int n = nums.size();
        int cnt=0;
        int m=INT_MIN;
        for(int i =0;i<n;i++){
            if(nums[i]==1){
                cnt++;

            }
            else{
                m=max(m,cnt);
                cnt=0;
            }
        }
        m=max(m,cnt);

        return m;
        
    }
};