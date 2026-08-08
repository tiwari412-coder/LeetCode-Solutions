class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        unordered_set<int> st(nums.begin() , nums.end());
        vector<int> ans(st.begin() , st.end());
        sort(ans.begin() , ans.end());
        
        if(ans.size() < 3){
            return ans.back();
        }

        return ans[ans.size() -3];
    }
};