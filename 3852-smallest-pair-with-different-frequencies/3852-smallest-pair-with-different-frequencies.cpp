class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x : nums) mp[x]++;

        int first_val = *min_element(nums.begin() , nums.end());
        int freq = mp[first_val];
        int second_val = INT_MAX;

        for(auto it : mp){
            if(first_val < it.first && it.second != freq){
                second_val = min(second_val , it.first);
            }
        }

        if(second_val != INT_MAX) return {first_val , second_val};
        return {-1,-1};
    }
};