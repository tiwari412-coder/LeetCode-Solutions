class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int curr = nums[0];
        int count = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] >= curr){
                curr = nums[i];
                count++;
            }
        }

        return count;
    }
};