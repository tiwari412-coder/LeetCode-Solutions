class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int val = 0;

        for(int x : nums){
            if(x % 2== 0) val |= x;
        }
        return val;
    }
};