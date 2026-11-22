class Solution {
public:
    bool checkString(string s) {
        string ch = s;
        sort(ch.begin() , ch.end());

        return s == ch;
        
    }
};