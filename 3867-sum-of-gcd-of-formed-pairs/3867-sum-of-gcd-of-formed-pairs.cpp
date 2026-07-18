class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int maxi = 0;
        vector<int>prefixGcd(nums.size());

        for(int i=0;i<nums.size(); i++){
            maxi = max(nums[i], maxi);
            prefixGcd[i] = gcd(nums[i], maxi);
        }

        sort(prefixGcd.begin(), prefixGcd.end());
        int n = prefixGcd.size();
        long long  sum = 0;

        int left = 0;
        int right = prefixGcd.size()-1;

        while(left<right){
            sum+=gcd(prefixGcd[left] , prefixGcd[right]);
            left++;
            right--;
        }
        return sum;
    }
};