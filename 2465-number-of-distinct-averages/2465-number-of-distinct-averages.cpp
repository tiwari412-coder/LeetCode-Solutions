class Solution {
public:
    int distinctAverages(vector<int>& nums) {
       unordered_set<int>st;
       sort(nums.begin() , nums.end());
       int i = 0;
       int j = nums.size()-1;

       
        while(i < j){
            int mini = nums[i];
            i++;
            int maxi = nums[j];
            j--;
            int avg = (maxi + mini);
            st.insert(avg);
       }
       return st.size(); 
    }
};