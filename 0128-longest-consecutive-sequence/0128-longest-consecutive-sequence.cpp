class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty())
            return 0;

        set<int> st(nums.begin(), nums.end());

        vector<int> arr(st.begin(), st.end());

        int count = 1;
        int longest = 1;

        for(int i = 1; i < arr.size(); i++) {

            if(arr[i] == arr[i-1] + 1) {
                count++;
            }
            else {
                count = 1;
            }

            longest = max(longest, count);
        }

        return longest;
    }
};