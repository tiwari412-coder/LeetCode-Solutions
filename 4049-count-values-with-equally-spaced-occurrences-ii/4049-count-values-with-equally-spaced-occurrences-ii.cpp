class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);         // storing the indices where a key occurs
        }

        int count = 0;

        for(auto it : mp){
            vector<int> ans = it.second;
            if(ans.size() <= 2)continue;

            int diff = ans[1] - ans[0];
            bool valid = true;
            for(int i=2; i<ans.size(); i++){
                if(diff != ans[i] - ans[i-1]) valid = false;
            }
            if(valid) count++;
        }

        return count;
    }
};