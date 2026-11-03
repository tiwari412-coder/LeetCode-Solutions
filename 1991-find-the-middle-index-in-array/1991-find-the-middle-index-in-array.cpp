class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int index = 0;
        int last = nums.size()-1;
        for(int i= 0; i<nums.size(); i++){
            int sum_left = 0 , sum_right = 0;
            for(int j =0; j<i; j++) sum_left += nums[j];
            for(int k=i+1;k<nums.size(); k++) sum_right += nums[k]; 

            if(sum_left == sum_right) return i;
        }

        return -1;
    }
};