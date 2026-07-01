class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
        //sumer singh
        int left =1;
        int right=0;
        int n=a.size();
        vector<int> b(n);
        
        for(int i=0;i<n;i++){
           if(a[i]>0){
                b[right]=a[i];
                right+=2;
           }
           else if(a[i]<0){
            b[left]=a[i];
            left+=2;
           }

        }
        return b;
    }

};