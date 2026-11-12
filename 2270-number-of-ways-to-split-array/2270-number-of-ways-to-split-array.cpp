class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int split = 0;
        long long sum = 0;

        for(int x : nums) sum += x;
        
        long long total = 0;
        for(int i=0; i<nums.size()-1; i++){
            total += nums[i];
            sum -= nums[i];
            if(total >= sum) split++;
        }

        return split;
    }
};