class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char ,int> mp;

        for(char ch : s){
            mp[ch]++;
        }

        for(char ch : t){
            mp[ch]--;
        }

        int total = 0;
        for(auto it : mp){
            if(it.second > 0){
                total += it.second;
            }
        }
        return total;
    }
};







