class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin() , strs.end());
        string s = strs.back();
        int maxi = s.size();
        string ch = "";

        for(int i=0; i<maxi; i++){
            char a = s[i];
            bool check = true;
            for(int j=0; j<strs.size()-1; j++){
                if(strs[j][i] != a){
                    check = false;
                    break;
                }
            }
            if(check) ch += a;
            else break;
        }

        return ch;
    }
};