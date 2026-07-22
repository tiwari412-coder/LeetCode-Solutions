class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> ans;
        vector<int> result;

        for(int i=0;i<nums.size(); i++){    // odd numbers
            if(i % 2 != 0){ 
                ans.push_back(nums[i]);
            }
        }

        sort(ans.rbegin(),ans.rend());

         for(int i=0;i<nums.size(); i++){   // even numbers
            if(i % 2 == 0){
                result.push_back(nums[i]);
            }
        }

        sort(result.begin(),result.end());

        vector<int> arr;

        int odd = 0;
        int even = 0;
        for(int i=0;i<nums.size();i++){
            if(i % 2 == 0){
            arr.push_back(result[even]);
            even++;
            }

            else{
            arr.push_back(ans[odd]);
            odd++;
        }
      }

        return arr;
    }
};