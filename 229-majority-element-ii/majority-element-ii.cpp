class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //sumer singh
        int cnt1=0;
        int cnt2=0;
        int e1=INT_MIN;
        int e2=INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(cnt1==0 && e2!=nums[i]){
                e1= nums[i];
                cnt1=1;
            }
            else if( cnt2==0 && e1!=nums[i]){
                e2= nums[i];
                cnt2=1;
            }
            else if(nums[i]==e1){
                cnt1++;
            }
            else if(nums[i]==e2){
                cnt2++;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }
        vector<int> ans;
        cnt1=0;
        cnt2=0;
        int mini = n/3 +1;

        for(int i =0;i<n;i++){
            if(e1==nums[i])cnt1++;
            else if(e2==nums[i])cnt2++;
        }
        if(cnt1>=mini) ans.push_back(e1);
        if(cnt2>=mini) ans.push_back(e2);
        return ans;
        
    }
};