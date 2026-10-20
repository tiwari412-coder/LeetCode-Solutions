class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int>ans;

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                nums[i] = nums[i]*2;
                nums[i+1] = 0;
            }
        }

        for(int x : nums){
            if(x > 0) ans.push_back(x);
        }
        for(int x : nums){
            if(x == 0) ans.push_back(x);
        }

        return ans;
    }
};