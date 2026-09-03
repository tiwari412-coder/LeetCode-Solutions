class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        long long ans = 0;

        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                long long g = gcd(nums[i] , nums[j]);
                long long curr = (1LL*nums[i]*nums[j])/(g*g);
                ans = max(ans , curr);
            }
        }
        return ans;
    }
};