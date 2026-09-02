class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char , int> mp;

        for(char ch : stones){
            mp[ch]++;
        }

        int count = 0;
        for(auto it : mp){
            if(jewels.find(it.first) != string :: npos) count += it.second;
        }

        return count;
    }
};