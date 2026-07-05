class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        //sumer singh
        
        int m = mat.size();
        int n = mat[0].size();
        vector<int> ans(n*m);
        int c =0;
        int top=0;
        int right = n-1;
        int bottom = m-1;
        int left = 0;
        while(top<=bottom && right>=left){
            for(int i=left;i<right+1;i++){
                ans[c]=mat[top][i];
                c++;
            }
            top++;
            for(int i=top;i<bottom+1;i++ ){
                ans[c]=mat[i][right];
                c++;
            }
            right--;
            if(top<=bottom){
            for(int i=right; i>=left;i--){
                ans[c]=mat[bottom][i];
                c++;
            }
            }
            bottom--;
            
            if(right>=left){
                for(int i=bottom;i>=top;i--){
                    ans[c]= mat[i][left];
                    c++;
                }
            }
            left++;
        }
        return ans;
    }
            
        };
       

    