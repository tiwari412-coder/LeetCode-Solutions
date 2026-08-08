class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int value = -1;
        if(nums.size() <= 2){
            return -1;
        }
        
        sort(nums.begin() , nums.end());
        if(nums.size() > 2){
            value = nums[1];
        }

        return value;
    }
};