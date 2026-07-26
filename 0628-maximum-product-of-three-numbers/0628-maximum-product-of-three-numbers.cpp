class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        sort(nums.begin() , nums.end());
        int n = nums.size()-1;
        int max1,max2;
        max1 = (nums[0]*nums[1])*nums[n];
        max2 = (nums[n]*nums[n-1])*nums[n-2];

        return max(max1,max2);
    }
};