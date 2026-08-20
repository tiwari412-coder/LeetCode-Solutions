class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int a = nums.size();
        int div = a/2;

        int count = 0;
        for(int i=0; i<nums.size(); i+=2){
            int a = nums[i];
            int b = nums[i+1];

            if(a == b) count++;
        }
    
        return count == div;
    }
};














