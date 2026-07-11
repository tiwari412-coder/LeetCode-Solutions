class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        bool result = false;
        sort(nums.begin() , nums.end());

        int st=0 , end=nums.size()-1;

        while(st<=end){
             int mid = (st +end) / 2;

            if(nums[mid] == target){
                result =true; 
                break;
            }

            else if(nums[mid] < target) st = mid+1;

            else if(nums[mid] >target) end = mid-1;

        }

        return result;
    }
};