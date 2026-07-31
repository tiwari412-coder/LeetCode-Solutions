class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int ,int> mp;

        for(int x : nums){
            mp[x]++;
        }

        int ans, maxi = 0;
        for(auto it : mp){
            if(it.second > maxi){
                maxi = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};