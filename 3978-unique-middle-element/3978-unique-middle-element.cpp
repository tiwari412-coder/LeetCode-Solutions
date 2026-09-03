class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int , int>mp;
        
        for(int x : nums) mp[x]++;
        int left = 0; 
        int right = nums.size(); 
        int mid = left + (right - left)/2;

        if(mp[nums[mid]] >= 2) return false;
        return true;
    }
};