class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        //sumer singh
        int n= plants.size();
        int k = capacityA;
        int j=capacityB;
        
        int right = n-1;
        int count=0;
        for(int left=0; left<n/2;left++){
            k= k-plants[left];
            j= j-plants[right];
            if(k<0){
                count++;
                k=capacityA-plants[left];
            }
            if(j<0){
                count++;
                j=capacityB-plants[right];
            }
            right--;
            if(n%2!=0 && left==n/2-1){
                if(k>=plants[left+1] || j>=plants[left+1]){
                    continue;
                }
                count++;
            }

        }
        return count;
        
        
    }
};