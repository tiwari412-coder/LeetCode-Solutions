class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // doing by taking prefix and suffix

        int left = 1;
        int right = 1;
        int ans = nums[0];
        int n = nums.size();

        for(int i=0; i<nums.size(); i++){
            if(left == 0) left = 1;
            if(right == 0) right = 1;

            left *= nums[i];
            right *= nums[n - i - 1];

            ans = max(ans , max(left , right));
        }

        return ans;
    }
};