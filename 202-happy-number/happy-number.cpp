class Solution {
private :
    // long long power(long long base,long long exp){
    //     long long res =1;
    //     while(exp>0){
    //         if(exp%2==1) res*=base;
    //         base*=base;
    //         exp/=2;
    //     }
    //     return res;
    // }
    int  getnext(int t){
        int sum=0;
        while(t){
            int j = t%10;
            sum+=j*j;
            t/=10;
        }
        return sum;
    }




public:
    bool isHappy(int n) {
        unordered_set<int> st;

        while(st.find(n)==st.end()){
            if(n==1)return true;
            st.insert(n);
            n = getnext(n);
            }
        return false;
    }
};