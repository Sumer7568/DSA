class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> m;

        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int i =0;
        for(auto p : m){
            nums[i]=p.first;
            i++;
        }

        return m.size();

        
    }
};