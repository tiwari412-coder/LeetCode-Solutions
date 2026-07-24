class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=count(nums.begin(),nums.end(),0);

        for(int i=0;i<c;i++){
            for(int j=0;j<nums.size()-1;j++){
                if(nums[j]==0 && nums[j+1]!=0){
                        swap(nums[j],nums[j+1]);
                    }
                }
            }
        }
};