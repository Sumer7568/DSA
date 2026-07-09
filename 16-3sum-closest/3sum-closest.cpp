class Solution {
public:
    int threeSumClosest(vector<int>& nums, int k) {
        //sumer singh
        int n=nums.size();
        long long sum=0;
        int mini = INT_MAX;
        int ans = 0;

        sort(nums.begin(),nums.end());
        
        for(int left=0;left<n;left++){
            int mid=left+1;
            int right = n-1;

            while(mid<right){
                sum= nums[left]+nums[mid]+nums[right];
                int dif=abs(sum-k);
                if(dif<mini){
                    mini = dif;
                    ans = sum;
                }
                if(sum>k){
                    right--;
                }
                else if(sum<k){
                    mid++;
                }
                else{
                    return sum;
                }

            }

        }
        return ans;
        
    }
};