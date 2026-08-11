class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];

        for(int i = 1; i<nums.size(); i++){
            if(nums[i] == nums[i-1] + 1){
                sum += nums[i];
            }
            else break;
        }

        unordered_set<int> st(nums.begin() , nums.end());

    // if the value that sum = value in the array that already exists then increment the sum
        while(st.find(sum) != st.end()){      
            sum++;
        }

        return sum;
    }
};