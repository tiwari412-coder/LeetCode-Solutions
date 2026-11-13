class Solution {
public:
    int countElements(vector<int>& nums) {
        int maxi = *max_element(nums.begin() , nums.end());
        int mini = *min_element(nums.begin() , nums.end());

        int count_maxi = 0, count_mini = 0;

        for(int x : nums){
            if(x == maxi)count_maxi++;
            else if(x == mini) count_mini++;
        }

        int n = nums.size();

        return n - count_maxi - count_mini;

    }
};