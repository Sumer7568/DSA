class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        //sumer singh

        int n = mat[0].size();

        int m = mat.size();

        int first_col=1;

        for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0 && j!=0 ){
                    mat[i][0]=0;
                    mat[0][j]=0;
                }
                else if (mat[i][j]==0 && j==0){
                    first_col=0;
                }
            }
        }

        for(int i =1 ;i<m;i++){
            for(int j=1;j<n;j++){
                if(mat[i][0]==0 || mat[0][j]==0){
                    mat[i][j]=0;
                }
            }
        }
        if(!mat[0][0]){
        for(int i=0 ;i<n;i++){
            mat[0][i]=0;

        }
        }
        if(!first_col){
            for(int i =0 ;i<m;i++){
                mat[i][0]=0;
            }
        }
        
    }
};