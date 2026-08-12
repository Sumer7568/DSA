class Solution {
private:
    void rev(string& s , int l,int r){
        
        while(l<r){
            swap(s[l],s[r]);
            r--;
            l++;
        }
    }
public:
    string reverseWords(string s) {
        int n = s.size();
        int l = 0;
        rev(s,l,n-1);
        
       for(int r=0;r<s.size();r++){
      

        if(s[r]!=' '){
            if(l!=0){
            s[l]=' ';
            l++;
        }
            int st = l;
            while(s[r]!=' ' && r<s.size()){
            s[l]=s[r];
            l++;
            r++;
            }
            rev(s,st,l-1);

        }
       }
       s.resize(l);
       return s;
        
    }
};