class Solution {
public:

    int check(int val){
        int num = 0;
        while(val > 0){
            int rem = val % 10;
            num += rem;
            val /= 10;
        }
        return num;
    }

    int maximumSum(vector<int>& nums) {
        unordered_map<int,int>mp;
        int maxi = -1;

        for(int x : nums){
            int sum = check(x);

            if(mp.find(sum) != mp.end()){
                maxi = max(maxi , x + mp[sum]);
            }

            mp[sum] = max(mp[sum] , x);
        }

        return maxi;
    }
};