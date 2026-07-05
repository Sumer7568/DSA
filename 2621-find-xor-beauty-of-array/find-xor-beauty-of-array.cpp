class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        //sumer singh
      int xors=0;
      for(int ch : nums){
        xors^=ch;
      } 
      return xors; 
    }
};