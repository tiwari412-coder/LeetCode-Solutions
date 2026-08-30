class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        if(nums.size() == 1) return 1;

        // Both elements are removed by only deleting from the front.
        int a = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(mini == nums[i] || maxi == nums[i])
                a = max(a, i);
        }

        a += 1;


        // Both elements are removed by only deleting from the back.
        int b = 0;

        for(int i = nums.size() - 1; i >= 0; i--) {
            if(mini == nums[i] || maxi == nums[i])
                b = i;
        }

        b = nums.size() - b;


        // Delete from the front to remove one element,
        // and delete from the back to remove the other.
        int c = 0;
        int d = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(mini == nums[i])
                c = i;

            if(maxi == nums[i])
                d = i;
        }

        int sum1 = c + 1 + nums.size() - d;
        int sum2 = d + 1 + nums.size() - c;

        int sum = min(sum1, sum2);

        return min(a, min(b, sum));
    }
};