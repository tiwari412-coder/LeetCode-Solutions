class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int x : nums){
            mp[x]++;
        }

        vector<pair<int,int>> ans(mp.begin() , mp.end());

        sort(ans.begin() , ans.end(), [](auto &a, auto &b){
            if(a.second != b.second){
                return a.second < b.second;
            }
            return a.first > b.first;
        });

        nums.clear();

        for(int i=0; i<ans.size(); i++){
            while(ans[i].second > 0){
                nums.push_back(ans[i].first);
                ans[i].second --;
        }
    }

        return nums;
    }
};





