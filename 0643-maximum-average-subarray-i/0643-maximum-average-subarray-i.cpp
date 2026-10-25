class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;

        for(int i=0; i<k; i++) sum += nums[i];
        double avg = (double)sum/k;
        double maxi = avg;

        for(int i=k; i<nums.size(); i++){
            sum += nums[i];
            sum -= nums[i - k];
            avg = (double)sum/k;
            maxi = max(maxi , avg);
        }
        return maxi;
    }
};