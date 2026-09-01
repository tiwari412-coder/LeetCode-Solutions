class Solution {
public:
    bool isSameAfterReversals(int num) {
        
        int ans = num;
        int val = 0;

        while(ans > 0){
            int rem = ans % 10;
            val = val*10 + rem;
            ans /= 10;
        }

        int result = 0;
        while(val > 0){
            int rem = val % 10;
            result = result*10 + rem;
            val /= 10;
        }

        return result == num;
    }
};