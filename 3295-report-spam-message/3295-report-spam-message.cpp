class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        int count = 0;
        unordered_map<string,int>mp;
        for(string ch : message) mp[ch]++;

        unordered_set<string>st;

        for(string ch : bannedWords) st.insert(ch);

        for(string ch : st){
            if(mp[ch] > 0) count += mp[ch];

            if(count >= 2) return true;
        }
        return false;
    }
};