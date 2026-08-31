class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;
        for(char ch : s){
            mp[ch]++;
        }
        int x = mp[s[0]];

        for(auto it : mp){
            if(it.second != x) return false;
        }
        return true;
    }
};