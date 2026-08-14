class Solution {
public:
    int myAtoi(string s) {
      int n= s.size();
      bool start = false;
      int neg = 1;
      string ans ="";
      for(auto ch : s){
        if((ch=='-'|| ch=='+' )&& !start){
           if(ch=='-'){
            neg=-1;
           }
           start = true;
            }
        else if((ch==32 || ch==48) && !start){
            if(ch==48)start=true;

            continue;
        }
        else if(ch>=48 && ch<=57 ){
            if(!start){
                start = true;
            }
            ans+=ch;
            
        }
       
        else break;
        
      }
      if(ans=="")return 0;
       long long a=0;
      for(int i=0;i<ans.length();i++){
        a=(a*10 + ans[i]-'0');
         if(neg == 1 && a >= INT_MAX) return INT_MAX;
      if(neg == -1 && -a <= INT_MIN) return INT_MIN;
      }
     
      return a*neg;
      
    }
};