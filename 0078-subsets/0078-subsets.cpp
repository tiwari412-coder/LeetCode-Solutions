class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       
       sort(nums.begin() , nums.end());
       vector<vector<int>>result;
       result.push_back({});

       for(int i=0;i<nums.size();i++){
        int n = result.size();

        for(int j=0;j<n;j++){
            vector<int>temp = result[j];
            temp.push_back(nums[i]);
            result.push_back(temp);
        }
    }

    set<vector<int>> st(result.begin() , result.end());
    vector<vector<int>> ans(st.begin(),st.end());

    return ans;
         
    }
};