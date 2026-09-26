class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mp;

        for(int i=0; i<knowledge.size(); i++){
            mp[knowledge[i][0]] = knowledge[i][1];
        }

        string ans = "";
        
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
              string ch = "";
              i++;  // ignoring the starting bracket

                while(s[i] != ')'){
                    ch += s[i];
                    i++;
                }

                if(mp.count(ch)){
                    ans += mp[ch];
                }
                else ans += '?'; 
            }

            else ans += s[i];
        }

        return ans;
    }
};