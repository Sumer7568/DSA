class Solution {
public:
    int maxArea(vector<int>& height) {
        //sumer singh
        int n = height.size();
        int left= 0;
        int right = n-1;
        long long prod =1;
        long long maxi= INT_MIN;
        while(right>left){
            int d = (right-left);
            int h = min(height[right],height[left]);
            prod=d*h;
            maxi= max(maxi,prod);
            
            if(height[right]>height[left])left++;
            else right--;

            


            }
            return maxi;

    }
};