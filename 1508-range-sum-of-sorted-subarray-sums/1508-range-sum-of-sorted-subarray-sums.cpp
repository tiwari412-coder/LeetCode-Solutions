class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<long long>result(nums.begin() ,nums.end());

        for(int i=0; i<nums.size(); i++){
            long long sum = nums[i];
            for(int j=i+1; j<nums.size(); j++){
                sum += nums[j];
                result.push_back(sum);
            }
        }
        sort(result.begin() , result.end());

        long long final_sum = 0;
        for(int i=left-1 ; i<right; i++){
            final_sum += result[i];
        }
        int mod = 1e9 + 7;
        return final_sum % mod;
    }
};