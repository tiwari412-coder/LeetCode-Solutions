class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int count = 0;
        unordered_map<int,int> mp;

        for(int i=0; i<divisors.size(); i++){
            for(int x  : nums){
                if(x % divisors[i] == 0){
                    count ++;
                }
            }
            mp[divisors[i]] = count;
            count = 0;
        }

        int ans = divisors[0];
        int maxi = mp[divisors[0]];

        for(auto it : mp){
            if(maxi < it.second || it.second == maxi && it.first < ans){
                ans = it.first;
                maxi = it.second;
            }
        }
        return ans;
    }
};