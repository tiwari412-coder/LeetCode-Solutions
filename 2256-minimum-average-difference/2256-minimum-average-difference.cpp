class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long sum = 0;
        int count1 = nums.size();

        for(int x : nums) sum += x;
        long long mini = LLONG_MAX;
        long long avg = 0 , total = 0;
        int index = 0 , count2 = 0;

        for(int i=0; i<nums.size(); i++){
            total += nums[i];
            count2 ++;
            sum -= nums[i];
            count1 --;

            long long leftavg = total/count2;
            long long rightavg = 0;

            if(count1 != 0) rightavg = sum/count1;

            avg = abs(leftavg - rightavg);

            if(mini > avg){
                mini = avg;
                index = i;
            }
        }

        return index;
    }
};