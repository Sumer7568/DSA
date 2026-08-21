class Solution {
public:
Solution() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0;i<n;i++){
           nums[i] = (nums[i] << 10) + i;
        }
        nth_element(nums.begin(),nums.begin()+k,nums.end(),greater<int>());
        nums.resize(k);
        sort(nums.begin(), nums.end(), [](int& a, int& b){
            return (a & 1023) < (b & 1023);
        });
        for (int& num : nums) {
            num >>= 10;
        }
        
        return nums;
        // int n =nums.size();
        // vector<pair<int,int>> freq(n);
        // for(int i=0;i<n;i++){
        //     freq[i].first = nums[i];
        //     freq[i].second = i;
        // }
        // sort(freq.begin(),freq.end());
        // vector<pair<int,int>> temp(k);
        // for(int i=n-1;i>n-1-k;i--){
        //     temp[n-1-i].first = freq[i].first;
        //     temp[n-1-i].second = freq[i].second;
        // }
        // sort(temp.begin(),temp.end(),[](const pair<int, int>& a, const pair<int, int>& b) {
        //     return a.second < b.second;
        // });
        // vector<int> ans(k);
        // for(int i=0;i<k;i++){
        //     ans[i]=temp[i].first;
        // }
        // return ans;
        
    }
};