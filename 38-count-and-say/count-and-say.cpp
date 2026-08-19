class Solution {
private:
    string count1(string s,int start,string a){
        int n = s.size();
        if(start>=n) return a;
        int count =1;
        int j =start;
        while(s[j]==s[j+1] && j+1<n){
            count++;
            j++;
        }
        start = j+1;
        return count1(s,start,a+to_string(count)+s[j]);
       
    }
    string count2(string s,int i,int n){

        if(i==n) return s;
        string a = "";
        return count2(count1(s,0,a),i+1,n);
    }
public:
    string countAndSay(int n) {
        return count2("1",1,n);
        
    }
};