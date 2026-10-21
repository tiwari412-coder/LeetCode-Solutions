class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int total = 0;

        for(int i=0; i<nums.size(); i++){
            int temp = i;
            int bits = 0;

            while(temp > 0){
                int rem = temp % 2;
                if(rem == 1) bits++;
                temp /= 2;
            }

            if(bits == k) total += nums[i];
        }

        return total;
    }
};