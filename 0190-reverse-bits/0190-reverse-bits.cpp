class Solution {
public:
    int reverseBits(int n) {
        string ans = "";

        for(int i=0; i<32; i++){
            int rem = n % 2;
            ans += to_string(rem);
            n /= 2;
        }

        unsigned int result = 0;

        for(char ch : ans){
            result = result*2 + (ch - '0');
        }

        return result;
    }
};