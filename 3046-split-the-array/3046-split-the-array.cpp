class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        for(int x : nums){
            mp[x]++;
        }

        for(auto it : mp){
            if(it.second > 2) return false;
        }
        return true;
    }
};