class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int ans = -1; //  -1 has all bits set to 1
    
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != i) ans &= nums[i];
        }

        return max(ans , 0);
    }
};