class Solution {
public:
    string reverseWords(string s) {
        string ch = "";
        string ans;

        for(int i=0; i<s.size(); i++){
            if(s[i] != ' ') ch += s[i];
            else{
                reverse(ch.begin() , ch.end());
                ans += (ch);
                ans += ' ';
                ch = "";
            }
        }
        reverse(ch.begin() , ch.end());
        ans += ch;
        return ans;
    }
};