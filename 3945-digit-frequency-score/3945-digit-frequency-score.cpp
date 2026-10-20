class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>mp;

        while(n > 0){
            int rem = n % 10;
            mp[rem]++;
            n /= 10;
        };

        int total = 0;

        for(auto it : mp){
            total += (it.second*it.first);
        }

        return total;
    }
};