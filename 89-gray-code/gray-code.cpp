class Solution {
private:
    long long binpow(long long a, long long b){
        if(b==0) return 1;
        long long res = binpow(a,b/2);
        if(b%2) return res*res*a;
        else return res*res;
    }
public:
    vector<int> grayCode(int n) {
       
       vector<int> code(binpow(2,n));
       for(int i=0;i<binpow(2,n);i++){
        code[i]= i^(i>>1);
       }
    return code;
    }
};