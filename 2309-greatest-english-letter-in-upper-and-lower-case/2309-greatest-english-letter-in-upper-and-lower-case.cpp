class Solution {
public:
    string greatestLetter(string s) {
        unordered_set<char>lower;
        unordered_set<char>upper;
        
        for(int i=0; i<s.size(); i++){
            if(s[i]>= 'A' && s[i] <= 'Z') upper.insert(tolower(s[i]));
            else lower.insert(s[i]);
        }

        for(char ch ='z'; ch>= 'a'; ch--){
            if(upper.count(ch) && lower.count(ch)){
                return string(1 , toupper(ch));
            }
        }
        return "";
    }
};