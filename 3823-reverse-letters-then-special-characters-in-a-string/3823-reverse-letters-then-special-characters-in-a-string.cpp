class Solution {
public:
    string reverseByType(string s) {
        string ans = "";
        string ch = "";

        for(int i=0; i<s.size(); i++){
            if(isalpha(s[i])) ans.push_back(s[i]);
            else ch.push_back(s[i]);
        }

        reverse(ans.begin() , ans.end());
        reverse(ch.begin() , ch.end());

        int j=0;
        int k = 0;

        for(int i=0; i<s.size(); i++){
            if(isalpha(s[i]) && j < ans.size()){
                s[i] = ans[j];
                j++;
            }
            else if(!isalpha(s[i]) && k < ch.size()){
                s[i] = ch[k];
                k++;
            }
        }

        return s;
    }
};