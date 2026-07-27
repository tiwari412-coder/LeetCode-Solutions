class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = 0;

        for(int i=0;i<nums.size();i++){
            int prod = 1;
            for(int j=i+1; j<nums.size();j++){
                prod = (nums[i]-1)*(nums[j]-1);
                maxi = max(maxi , prod);
            }
        }

        return maxi;
    }
};