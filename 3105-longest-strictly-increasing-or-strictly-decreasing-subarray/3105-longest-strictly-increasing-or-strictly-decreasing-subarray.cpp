class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int left = 0;
        int right = 0;
        stack<int>st;
        stack<int>check;

        for(int i=0; i<nums.size(); i++){
            if(!st.empty() && st.top() >= nums[i]){
                left = max(left , (int)st.size());
                while(!st.empty()) st.pop();
            }

            if(!check.empty() && check.top() <= nums[i]){
                right = max(right ,(int)check.size());
                while(!check.empty()) check.pop();
            }
            st.push(nums[i]);
            check.push(nums[i]);
        }
        // check the last subarray 
        left = max(left , (int)st.size());
        right = max(right , (int)check.size());

        return max(left ,right);
    }
};