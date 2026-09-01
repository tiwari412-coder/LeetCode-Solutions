class Solution {
public:
    string reverseOnlyLetters(string s) {
        string ans = s;
        reverse(ans.begin(), ans.end());

        for(int i=0; i<ans.size(); i++){
            if(!isalpha(ans[i])){
                ans.erase(i , 1);
                i--;
            }
        }

        int j=0;
        for(int i=0; i<s.size(); i++){
            if(isalpha(s[i]) && j < ans.size()){
                s[i] = ans[j];
                j++;
            }
        }
        return s;
    }
};