class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;

        for(auto arr : nums){
            for(int x : arr){
                mp[x]++;
            }
        }

        for(auto it : mp){
            if(it.second == nums.size()) ans.push_back(it.first);
        }

        sort(ans.begin() , ans.end());
        return ans;
    }
};