class Solution {
public:
    bool consecutiveSetBits(int n) {
        int count = 0;

        while(n > 0){
            if((n & 3) == 3){
                count++;
                }
                n >>= 1;  // right shift one bit one by one

                if(count > 1) return false;
            }

        return count == 1;
    }
};