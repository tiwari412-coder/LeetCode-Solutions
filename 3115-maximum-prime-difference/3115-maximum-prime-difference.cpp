class Solution {
public:
    
    bool check(int n){
        if( n < 2) return false;

        for(int i=2; i<=sqrt(n); i++){
            if(n % i == 0) return false;
        }
        return true;
    }

    int maximumPrimeDifference(vector<int>& nums) {
        vector<int>ans;

        for(int i=0; i<nums.size(); i++){
            bool valid = false;
            valid = check(nums[i]);

            if(valid) ans.push_back(i);
        }

        if(ans.size() == 1) return 0;
        return ans.back() - ans[0];
    }
};