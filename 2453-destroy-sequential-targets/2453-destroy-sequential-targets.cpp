class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
        unordered_map<int,int>mp;

        for(int x : nums){
            mp[x % space]++;
        }

         // largest group size store so that we can just check the element in the nums that will act as a key and who so ever matches with the largest group then just storing min value and returning

         int maxi = 0;
        for(auto it : mp) maxi = max(maxi , it.second);  

        int ans = INT_MAX;
        for(int x : nums){
            if(mp[x % space] == maxi){
                ans = min(ans , x);
            }
        }

        return ans;
    }
};