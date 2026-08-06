class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        nums.insert(nums.begin() , 0);
        int n = nums.size()-1;
        int ans = 0;

        for(int i=1;i<=n;i++){
            if(n % i == 0){
                ans += nums[i]*nums[i];
        }
    }

    return ans;
    }
};