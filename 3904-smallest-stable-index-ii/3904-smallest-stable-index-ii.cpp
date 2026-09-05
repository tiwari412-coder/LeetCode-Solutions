class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefmax(n);
        vector<int> suffmin(n);
        int maxi = 0;

        for(int i=0; i<nums.size(); i++){
            maxi = max(maxi , nums[i]);
            prefmax[i] = maxi;
        }

        suffmin[n-1] = nums[n-1];  // last value for the suffixmin

        for(int i=n-2; i>=0; i--){     // from second last value to starting access
            suffmin[i] = min(nums[i] , suffmin[i+1]);
        }

        for(int i=0; i<prefmax.size(); i++){
            int diff = prefmax[i] - suffmin[i];
            if(diff <= k) return i;
        }

        return -1;
    }
};