class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> ans;
        for(int i=1; i<=101; i++){
            ans.push_back(k*i);
        }

        for(int x : ans){
            if(find(nums.begin() , nums.end(), x) == nums.end()){
                return x;
            }
        }
        return 0;
    }
};