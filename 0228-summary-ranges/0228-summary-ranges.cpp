class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;

        if(nums.size() == 0) return ans;
        
        for(int i=0; i<nums.size(); i++){
            string ch = "->";
            string s = to_string(nums[i]);
            int value = nums[i];
            int count = 0;

            for(int j=i+1; j<nums.size(); j++){
                if(value + 1 == nums[j]){
                    value = nums[j];
                    count ++;
                }
                else break; 
            }
            if(count > 0){
                s += ch;
                s += to_string(value);
                ans.push_back(s);
                 i += count;
            }
            else ans.push_back(s);
        }
        
       
        return ans;
    }
};