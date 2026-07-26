class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
       vector<int> left;
       vector<int> right;

       left.push_back(0); 
       right.push_back(0);
       int sum = 0;

       for(int i=0;i<nums.size()-1;i++){
        sum += nums[i];
        left.push_back(sum);
       } 

       reverse(nums.begin() , nums.end());

       int add = 0;
       for(int i=0;i<nums.size()-1;i++){
        add += nums[i];
        right.push_back(add);
       } 

       reverse(right.begin() , right.end());

       vector<int> ans;

       for(int i=0; i<left.size(); i++){
        int a = left[i];
        int b = right[i];
        int val = abs(a - b);
        ans.push_back(val);
       }

       return ans;
    }
};


