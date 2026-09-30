class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            if(x == nums[i]) ans.push_back(i);
        }

        vector<int>result;
        for(int i=0; i<queries.size(); i++){
            int k = queries[i];
            if(k <= ans.size()){
                result.push_back(ans[k-1]);
            }
            else result.push_back(-1);
        }
        return result;
    }
};