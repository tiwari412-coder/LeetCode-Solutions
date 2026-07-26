class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int sum =0;
            int m = nums[i];
            while(m > 0){
                int result = m%10;
                sum += result;
                m =m/10;
            }
            ans.push_back(sum);
        }

        sort(ans.begin() , ans.end());

        int diff = ans.front();

        return diff;
    }
};