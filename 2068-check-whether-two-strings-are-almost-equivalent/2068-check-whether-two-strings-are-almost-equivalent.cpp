class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char, int> mp;
        for(char ch : word1) mp[ch]++;

        unordered_map<char ,int> rj;
        for(char ch : word2) rj[ch]++;

        for(auto it : mp){
            int count1 = rj[it.first];
            int count2 = it.second;
            if(abs(count1 - count2) > 3) return false;
        }

        for(auto it : rj){
            int count1 = mp[it.first];
            int count2 = it.second;
            if(abs(count1 - count2) > 3) return false;
        }

        return true;
    }
};