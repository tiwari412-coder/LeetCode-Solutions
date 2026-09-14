class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int index = -1;

        for(int i=0; i<nums.size(); i++){
           if(nums[i] == 1){
            if(index != -1 && i - index - 1 < k) return false;
            index = i;
           }
        }
        return true;
    }
};