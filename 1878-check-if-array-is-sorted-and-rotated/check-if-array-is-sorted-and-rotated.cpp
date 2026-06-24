class Solution {
public:
    bool check(vector<int>& nums) {
        // sumer singh


        int count =0;
        int n=nums.size();
        if(nums[n-1]>nums[0]){
                count++;
            }

        for(int i = 1;i<n;i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
            

        }
        if(count<=1){
            return true;
        }
        else{
            return false;
        }

        
        
        // int sorted=false;
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     vector<int> b;
        //     for(int j=0;j<n;j++){

        //     b.push_back(nums[(j+i)%nums.size()]);
        //     }
        //     if(is_sorted(b.begin(),b.end())){
        //         sorted = true;
        //         break;
        //     }
        // }


        

    // return sorted;
        
    }
};