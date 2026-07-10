class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        //sumer singh
        int n = nums.size();
        set<vector<int>> ans;


        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                set<long long> st;
                for(int k=j+1;k<n;k++){
                    long long sum = nums[i]+nums[j];
                    sum+=nums[k];
                    long long rem = target - sum;
                    if(st.find(rem )!=st.end()){
                        vector<int> temp = {nums[i],nums[j],nums[k],(int)rem};
                        sort(temp.begin(),temp.end());
                        ans.insert(temp);
                    }
                    st.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> done(ans.begin(),ans.end());
        return done;
        
        
    }
};