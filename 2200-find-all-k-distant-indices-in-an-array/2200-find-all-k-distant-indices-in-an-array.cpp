class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int>ans;

        for(int i=0; i<nums.size(); i++){
            bool check = false;
            for(int j=0; j<nums.size(); j++){
                if(abs(i - j) <= k && nums[j] == key){
                    check = true;
                    break;
                }
            }

            if(check) ans.push_back(i);
        }

        sort(ans.begin() , ans.end());
        return ans;
    }
};