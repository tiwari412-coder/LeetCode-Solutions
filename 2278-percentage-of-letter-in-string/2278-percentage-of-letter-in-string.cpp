class Solution {
public:
    int percentageLetter(string s, char letter) {
        unordered_map<char, int> mp;

        for(char ch : s){
            mp[ch]++;
        }

        int num = 0;
        for(auto it : mp){
            if(letter == it.first){
                num = it.second;
                break;
            }
        }

        int size = s.size();
        int percentage;
        percentage = (num*100)/size;

        return percentage;
    }
};



