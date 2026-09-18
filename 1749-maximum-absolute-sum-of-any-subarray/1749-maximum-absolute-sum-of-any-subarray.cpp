class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxi = 0;
        int mini = 0;
        int sum = 0;
        int sub = 0;


        for(int i=0; i<nums.size(); i++){
            if(sum < 0){
                sum = 0;
            }
            
            if(sub > 0){
                sub = 0;
            }

            sum += nums[i];
            maxi = max(maxi , sum);

            sub += nums[i];
            mini = min(mini , sub);
        }

        return max(maxi , abs(mini));
    }
};