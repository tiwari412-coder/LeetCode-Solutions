class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x : nums){
            mp[x]++;
        }

        int ans;

        for(auto p : mp){
            if(p.second == 1){
                ans = p.first;
            }
        }

        return ans;
    }      
};