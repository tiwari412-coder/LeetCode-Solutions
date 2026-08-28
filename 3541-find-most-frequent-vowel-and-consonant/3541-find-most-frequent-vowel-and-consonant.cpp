class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> mp;

        for(char ch : s){
            mp[ch]++;
        }

        int maxCON = 0;
        int maxVOW = 0;

        for(auto it : mp){
            if(it.first == 'a' || it.first == 'e' || it.first == 'i' || it.first == 'o' ||  it.first == 'u') maxVOW = max(maxVOW , it.second);

            else maxCON = max(maxCON , it.second);
        }

        return maxCON + maxVOW;
    }
};