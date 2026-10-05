class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin() , nums.end() ,[](const string& a, const string& b){
            if(a.size() != b.size()) return a.size() > b.size();
            return a > b; // when the two string are of equal size then compare character by character
        });

        return nums[k-1];
    }
};