class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //sumer singh
        unordered_map<int,int> m;
        int n= nums.size();
        for(int i=0;i<n;i++){
            int c = target - nums[i];
            if(m.find(c)!=m.end()){
                return {m[c],i};
            }
            m[nums[i]]=i;
        }
        return {-1,-1};
        
    }
};