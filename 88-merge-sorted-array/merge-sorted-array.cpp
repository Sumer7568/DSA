class Solution {
    //sumer singh
private:
    void swapifgreater(vector<int>& a, vector<int>& b,int i,int j){
        if(a[i]>b[j]){
            swap(a[i],b[j]);
        }
    }
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int gap =(n+m)/2 + (n+m)%2;
        
        while(gap>0){
            int left=0;
            int right = left + gap;

            while(right<n+m){
                if(left<m && right>=m){
                    swapifgreater(nums1,nums2,left,right-m);
                }
                else if (left>=m){
                    swapifgreater(nums2,nums2,left-m,right-m);
                }
                else{
                    swapifgreater(nums1,nums1,left,right);
                }
                right++,left++;
            }
            if(gap==1)break;
            gap = gap/2 + gap%2;
        }
        
        for(int i = m;i<n+m;i++){
            nums1[i]=nums2[i-m];
        }
        
    }
};