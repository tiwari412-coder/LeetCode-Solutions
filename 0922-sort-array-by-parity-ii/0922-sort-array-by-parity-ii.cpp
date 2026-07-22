class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> ans;
        vector<int> result;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] % 2 == 0){
                ans.push_back(nums[i]);
            }

            else  if(nums[i] % 2 != 0){
                result.push_back(nums[i]);
            }
        }

        vector<int> arr;

        for(int i=0; i<ans.size(); i++){
            arr.push_back(ans[i]);
            arr.push_back(result[i]);
        }

        return arr;
    }
};