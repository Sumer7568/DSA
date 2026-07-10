class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        //sumer singh
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int left,right;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i-1]==nums[i])continue;
            for(int j =i+1;j<n;j++){
                if(j>i+1 && nums[j-1]==nums[j])continue;
                left= j+1;
                right = n-1;
                while(left<right){
                    long long sum = nums[left]+nums[right];
                    sum+= nums[i];
                    sum+=nums[j];
                    if(sum>target)right--;
                    else if(sum<target)left++;
                    else if(sum==target){
                        ans.push_back({nums[i],nums[j],nums[left++],nums[right--]});
                        while(left<right && nums[left]==nums[left-1]){
                            left++;
                        }
                        while(left<right && nums[right+1]==nums[right]){
                            right--;
                        }
                    }
                }
            }
        }

        return ans;





        // int n = nums.size();
        // set<vector<int>> ans;


        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         set<long long> st;
        //         for(int k=j+1;k<n;k++){
        //             long long sum = nums[i]+nums[j];
        //             sum+=nums[k];
        //             long long rem = target - sum;
        //             if(st.find(rem )!=st.end()){
        //                 vector<int> temp = {nums[i],nums[j],nums[k],(int)rem};
        //                 sort(temp.begin(),temp.end());
        //                 ans.insert(temp);
        //             }
        //             st.insert(nums[k]);
        //         }
        //     }
        // }
        // vector<vector<int>> done(ans.begin(),ans.end());
        // return done;
        
        
    }
};