class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;
        int temp = n;

        while(temp > 0){
            int rem = temp % 10;
            sum += rem;
            prod *= rem;
            temp /= 10;
        }

        return prod - sum;
    }
};