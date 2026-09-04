class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi = 0;
        int mini = INT_MAX;

        for(int i=0; i<nums.size(); i++){
            maxi = max(maxi , nums[i]);
            mini = *min_element(nums.begin() + i , nums.end());
            int diff = maxi - mini;
            if(k >= diff) return i;
        }

        return -1;
    }
};