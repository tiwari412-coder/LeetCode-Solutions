class Solution {
public:
    bool isPalindrome(string s) {

        string  st="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                st += tolower(s[i]);
         }
        }

        string result = st;
        reverse(result.begin(),result.end());

        for(int i=0;i<st.length();i++){
            if(result[i] != st[i]){
                return false;
            }
        }

        return true;

    }
};