class Solution {
public:
    int minimumOperations(vector<int>& nums) {
      int count = 0;

      while(true){
        int mini = INT_MAX;

        for(int x : nums){
            if(x > 0) mini = min(mini , x);
        }

        if(mini == INT_MAX) return count;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0) nums[i] -= mini;
        }
        
        count++;
      }

      return count;
    }
};