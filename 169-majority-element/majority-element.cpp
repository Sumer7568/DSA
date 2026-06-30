class Solution {
public:
    int majorityElement(vector<int>& a) {
        //sumer singh
        
        int count=0;
        int n=a.size();
        int element;
        for(int i=0;i<n;i++){

            if(count==0){
                element=a[i];
            }
            if(a[i]==element){
                count++;
            }
            else{
                count--;
            }
        }
        return element;
        
    }
};