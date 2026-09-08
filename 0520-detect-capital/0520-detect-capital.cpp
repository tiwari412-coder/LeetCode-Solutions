class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        int upper = 0;
        int lower = 0;

        if(isupper(word[0])){
            for(int i=1; i<word.size(); i++){
            if(islower(word[i])) lower++;
            else upper++;
         }
        }
        else if(islower(word[0])){
            for(int i=1; i<word.size(); i++){
                if(islower(word[i])) lower++;
                else upper++;
            }
        }

        if(islower(word[0]) && lower == n-1) return true;
        if(isupper(word[0]) && (lower == n-1 || upper == n-1)) return true;

        return false;
    }
};