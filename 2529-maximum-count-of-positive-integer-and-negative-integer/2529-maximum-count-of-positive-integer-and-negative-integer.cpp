class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int maxi = 0;
        int mini = 0;
        
        for(int i=0; i<nums.size(); i++){
                if( nums[i]< 0){
                    mini++;
                }
                else if(nums[i] > 0){
                    maxi++;
                }
            }

        int result;    
        if(mini == 0){
            return maxi;
        }
        else if(maxi == 0){
            return mini;
        }

        else{    
            result = max(maxi , mini);
            return result;
        }
    }
};