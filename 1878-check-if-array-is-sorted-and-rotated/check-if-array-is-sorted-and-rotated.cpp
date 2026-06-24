class Solution {
public:
    bool check(vector<int>& nums) {
        // sumer singh
        
        
        int sorted=false;
        int n = nums.size();
        for(int i=0;i<n;i++){
            vector<int> b;
            for(int j=0;j<n;j++){

            b.push_back(nums[(j+i)%nums.size()]);
            }
            if(is_sorted(b.begin(),b.end())){
                sorted = true;
                break;
            }
        }


        

    return sorted;
        
    }
};