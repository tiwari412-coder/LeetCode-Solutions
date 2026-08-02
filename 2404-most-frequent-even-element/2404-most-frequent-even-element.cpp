class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        vector<pair<int ,int>> ans;

        unordered_map<int ,int>mp;
        for(int x : nums){
            mp[x]++;
        }

        for(int i=0 ; i<nums.size(); i++){
            if(nums[i] % 2== 0){
                ans.push_back({nums[i] , mp[nums[i]]});
         }
        }

        sort(ans.begin() , ans.end());   // isse sirf first means values sort hoaa hai

        int maxi = INT_MIN;
        for(auto it : ans){
            maxi = max(maxi , it.second);   // frequency store kiya
        }

        int value = -1;
        for(auto p : ans){
            if(maxi == p.second){
                value = p.first;
                break;
            }
        }
        return value;
    }
};