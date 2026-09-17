class Solution {
public:
    string compressedString(string word) {
        string ch = "";
        char s = word[0];
        int count = 1;

        for(int i=1; i<word.size(); i++){
            if(s != word[i] || count >= 9){
                ch += to_string(count);
                ch += s;
                s = word[i];
                count = 0;
            }
            count ++; 
        }

        if(count != 0){
            ch += to_string(count);
            ch += s;
        }
        return ch;
    }
};