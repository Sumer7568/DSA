class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(); 
        if (n == 0) return 0; 
        
        int left = 1;  
        int right = 1;

        for(; right < n; right++){
            if(nums[right-1] != nums[right]){
                nums[left] = nums[right];
                left++;
            }
        }

        return left; 
    

    
        // map<int,int> m;

        // for(int i=0;i<nums.size();i++){
        //     m[nums[i]]++;
        // }
        // int i =0;
        // for(auto p : m){
        //     nums[i]=p.first;
        //     i++;
        // }

        // return m.size();

        
    }
};