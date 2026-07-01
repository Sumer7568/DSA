class Solution {
public:
    int maxProfit(vector<int>& p) {
        // sumer singh
        int n=p.size();
        int maxi=0;
        int min = p[0];
    
        for(int i=1;i<n;i++){
            if(p[i]>min){
                maxi=max(maxi,p[i]-min);
            }
            else{
                min = p[i];
            }
            

        }
        // int left =0;
        // int right=1;
        // int n=p.size();
        // int maxi=0;
        // for(;right<n;right++){
        //     if(p[right]>p[left]){
        //         maxi=max(maxi,p[right]-p[left]);

        //     }
        //     else if(p[right]<=p[left]){
        //         left=right;
        //     }

        // }
        return maxi;
        
    }
};