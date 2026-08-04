class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin() , nums.end());

        int mini = *min_element(nums.begin() , nums.end());
        int maxi = *max_element(nums.begin() , nums.end());
        vector<int> ans(maxi+1, 0);

        for(int x : nums){
            ans[x] = x;
        }

        vector<int> final;
        for(int i=mini; i<=maxi; i++){
            if(ans[i] == 0){
                final.push_back(i);
            }
        }

        return final;
    }
};