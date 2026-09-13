class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x : nums) mp[x]++;
        int count = 0;

        for(int i=0; i<nums.size(); i++){
            for(int j=i+1;j<nums.size(); j++){
                for(int k=j+1; k<nums.size(); k++){
                    if(mp[nums[k]] == 3){
                        if(nums[i] == nums[j] && nums[j] == nums[k] && (j - i) == (k - j)) count++;
                    }
                }
            }
        }
        return count;
    }
};