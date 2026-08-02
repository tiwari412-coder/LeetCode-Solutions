class Solution {
public:
    int percentageLetter(string s, char letter) {
        unordered_map<char, int> mp;

        for(char ch : s){
            mp[ch]++;
        }

        int num = mp[letter];
        return (num*100)/s.size();
    }
};



