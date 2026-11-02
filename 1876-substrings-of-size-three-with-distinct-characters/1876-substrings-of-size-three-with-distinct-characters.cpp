class Solution {
public:
    int countGoodSubstrings(string s) {
        int k = 3;
        vector<string>ans;
        string ch = "";
        for(int i=0; i<3; i++){
            ch += s[i];
        }

        ans.push_back(ch);

        for(int i=3; i<s.size(); i++){
            ch += s[i];
            ch.erase(0 , 1);
            ans.push_back(ch);
        }

        int count = 0;
        unordered_map<char , int>mp;

        for(int i=0; i<ans.size(); i++){
            bool check = true;
            for(char x : ans[i]) mp[x]++;
            for(auto it : mp){
                if(it.second > 1){
                    check = false;
                    break;
                }
            }
            if(check) count++;
            mp.clear();
        }

        return count;
    }
};



