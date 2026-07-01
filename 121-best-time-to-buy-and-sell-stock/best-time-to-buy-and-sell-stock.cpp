class Solution {
public:
    int maxProfit(vector<int>& p) {
        int left =0;
        int right=1;
        int n=p.size();
        int maxi=0;
        for(;right<n;right++){
            if(p[right]>p[left]){
                maxi=max(maxi,p[right]-p[left]);

            }
            else if(p[right]<=p[left]){
                left=right;
            }

        }
        return maxi;
        
    }
};