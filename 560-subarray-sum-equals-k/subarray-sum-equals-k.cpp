class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //sumer singh
        unordered_map<int,int> mpp;
        int n=nums.size();
        long long sum =0;
        int cnt=0;
        mpp[0]=1;
        for(int i=0;i<n;i++){
            sum +=nums[i];
            long long rem = sum -k;
            if(mpp.find(rem)!=mpp.end()){
                
                cnt+= mpp[rem]; 
            }
            mpp[sum]++;



        }
        return cnt;
        
    }
};