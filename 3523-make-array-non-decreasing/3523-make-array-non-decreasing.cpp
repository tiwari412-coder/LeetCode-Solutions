class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int curr = nums[0];
        int count = 1;

        for(int i=1; i<nums.size(); i++){
            if(nums[i] >= curr){
                curr = nums[i];
                count++;
            }
        }

        return count;
    }
};