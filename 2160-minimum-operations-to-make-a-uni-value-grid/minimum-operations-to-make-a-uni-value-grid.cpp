class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> cope;
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cope.push_back(grid[i][j]);
            }
        }
        sort(cope.begin(),cope.end());
        int median =cope[m*n/2];
        int ans =0;
        for(int g : cope){
            if(abs(median-g)%x!=0){return -1;}
            ans+=abs(median-g)/x;
        }
        return ans;
        
        

    }
};