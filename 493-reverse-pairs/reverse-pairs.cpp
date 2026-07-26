class Solution {
private:
    int merge(vector<int>& arr, int low,int mid,int high){

        int right = mid+1;
        int count =0;
        for(int i=low ;i<=mid;i++){
           
            while(right<=high && arr[i]>2LL*arr[right]){
                
                right++;
            }
            count+=(right-(mid+1));

        }
        int left = low;
        right = mid+1;
        
        vector<int> temp;
        while(left<=mid && right<=high){
            
            if(arr[left]>arr[right]){
                
                temp.push_back(arr[right]);
                right++;
            }
            else {
                temp.push_back(arr[left]);
                left++;
            }
        }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
         
        
        return count;
    }
    int mergesort(vector<int>& arr, int low, int high){
        int mid = (low+high)/2;
        if(low>=high)return 0;
        int cnt = mergesort(arr,low,mid);
        cnt+=mergesort(arr,mid+1,high);
        cnt+=merge(arr,low,mid,high);
        return cnt;
    }
public:
    int reversePairs(vector<int>& nums) {
        int c = mergesort(nums,0,nums.size()-1);
        return c;
    }
};
