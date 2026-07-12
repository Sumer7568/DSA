class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        int n = a.size();
        vector<vector<int>> ans ;
        sort(a.begin(),a.end());
        int first = a[0][0];
        int second = a[0][1];
        for(int i=1;i<n;i++){
            if(a[i][0]<=second){
                second = max(second,a[i][1]);

            }
            else{
                vector<int> temp = {first,second};
                ans.push_back(temp);
                first=a[i][0];
                second=a[i][1];
            }

        }
        ans.push_back({first,second});
        return ans;
    }
};