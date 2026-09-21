class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int val = 0;
        int multiplier = 1;

        for(int i=0; i<4; i++){
            int rem1 = num1 % 10;
            int rem2 = num2 % 10;
            int rem3 = num3 % 10;

            int mini = min({rem1, rem2, rem3});
            val += mini*multiplier;

            multiplier*= 10;
            num1 /= 10;
            num2 /= 10;
            num3 /= 10;
        }
        return val;
    }
};