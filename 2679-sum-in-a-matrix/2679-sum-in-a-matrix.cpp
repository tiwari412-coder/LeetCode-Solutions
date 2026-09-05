class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int sum = 0;
        int n = nums[0].size();
        int k = nums.size();
        int maxi = 0;
        int m = 0;

        for(int i=0; i<k; i++){
            sort(nums[i].rbegin(), nums[i].rend());
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<k; j++){
                maxi = max(maxi , nums[j][m]);
            }
            sum += maxi;
            maxi = 0;
            m++;
        }

        return sum;
    }
};

















