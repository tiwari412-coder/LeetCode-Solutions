class Solution {
public:
    int minMoves(vector<int>& nums) {
        // instead of increasing the values decrease the value from max to min

        int mini = *min_element(nums.begin() , nums.end());
        int count = 0;

        for(int x : nums) count += x - mini;
        return count;
    }
};