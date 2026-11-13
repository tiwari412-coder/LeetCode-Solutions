class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;

        for(int x : nums){
            if(x >= 10){
                while(x > 0){
                    int rem = x % 10;
                    sum += rem;
                    x /= 10;
                }
            }
            else sum += x;
        }

        int total = 0;
        for(int x : nums) total += x;

        return total - sum;
    }
};