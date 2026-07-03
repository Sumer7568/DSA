class Solution {
public:
    void nextPermutation(vector<int>& a) {
        //sumer singh
        
       
        int n=a.size();
        if(is_sorted(a.begin(),a.end(),greater<int>())){
            sort(a.begin(),a.end());
            return;
        }
        int mini= INT_MAX;
        int ind;
        int pivot;
        for(int i=n-1;i>0;i--){
           
            
            if(a[i]>a[i-1] ){
                
                pivot = i-1;
                break;
            }

            
        }
        for(int i=n-1;i>pivot;i--){
            if(mini>a[i] && a[i]>a[pivot]){
                mini=a[i];
                ind = i;
            }
            }
        swap(a[pivot],a[ind]);

        sort(a.begin()+pivot+1,a.end());

        
       
    }
};