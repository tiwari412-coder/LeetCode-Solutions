class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char>lower;
        unordered_set<char>upper;
        
        for(int i=0; i<word.size(); i++){
            if(word[i]>= 'A' && word[i] <= 'Z') upper.insert(tolower(word[i]));
            else lower.insert(word[i]);
        }

        int count = 0;

        for(int i='a'; i<='z'; i++){
            if(upper.count(i) && lower.count(i)) count++;
        }

        return count;
    }
};










