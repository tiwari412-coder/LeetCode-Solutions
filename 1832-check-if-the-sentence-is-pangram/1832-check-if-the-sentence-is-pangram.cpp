class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool valid = true;
        unordered_map<char , int> mp;
        for(char ch : sentence){
            mp[ch]++;
        }
        int count = 0;
        for(auto it : mp){
            count++;
        }
        if(count > 26 || count < 26){ valid = false;}
        return valid;
    }
};