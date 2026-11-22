class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> ans;

        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])){
                string ch = " ";
                while(i < s.size() && isdigit(s[i])){
                    ch += s[i];
                    i++;
                }
                ans.push_back(stoi(ch));
            }
        }



        for(int i=1; i<ans.size(); i++){
            if(ans[i] <= ans[i-1]) return false;
        }

        return true;
    }
};