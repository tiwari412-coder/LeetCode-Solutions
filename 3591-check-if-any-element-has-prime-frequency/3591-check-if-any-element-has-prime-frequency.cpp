class Solution {
public:

    bool checkprime(int n){
        if(n < 2) return false;

        for(int i=2; i<=sqrt(n); i++){
            if(n % i == 0) return false;
        }
        return true;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x : nums) mp[x]++;

        for(auto it : mp){
            if(checkprime(it.second) == true) return true;
        }

        return false;
    }
};