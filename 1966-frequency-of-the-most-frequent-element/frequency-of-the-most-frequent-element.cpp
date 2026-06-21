class Solution {
public:
    //sumer singh
    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());

        int maxx = 0;
        int left =0;
        long long currsum=0;



        for(int i =0;i<nums.size();i++){

        currsum+=nums[i];
        while((long long)(i-left+1)*nums[i]-currsum>k){
            currsum-=nums[left];
            left++;

        }
        maxx=max(i-left+1,maxx);


        }

        return maxx;


        
        

        
    }
};