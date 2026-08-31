class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int sum = nums[0] + nums[1];
        int count = 0;

        for(int i=0; i<nums.size(); i+=2){
            if(nums[i] + nums[i+1] == sum) count++;
            else if(nums[i] + nums[i+1] != sum) break;
        }
        return count;
    }
};