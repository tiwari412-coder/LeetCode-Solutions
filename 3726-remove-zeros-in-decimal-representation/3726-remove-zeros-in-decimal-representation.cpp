class Solution {
public:
    long long removeZeros(long long n) {
        string s = to_string(n);
        string a = "";

        for(char x : s){
            if(x != '0') a += x;
        }

        return stoll(a);
    }
};