class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        long long peak = *max_element(nums.begin() , nums.end());
        long long asc = 0;
        long long desc = 0;
        int index = 0;

        for(int i=0; i<nums.size(); i++){
            asc += nums[i];
            if(nums[i] == peak){
                index = i;
                break;
            }
        }

        for(int i = index; i<nums.size(); i++){
            desc += nums[i];
        }

        if(asc < desc) return 1;
        else if(asc == desc) return -1;
        return 0;
    }
};